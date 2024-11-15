

#include "Warlock.hpp"

Warlock::Warlock(void)
{
	return ;
}

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout <<this->getName() <<": This looks like another boring day." <<std::endl;
	return ;
}

Warlock::Warlock(const Warlock& copy)
{
	this->_name = copy._name;
	this->_title = copy._title;
	return ;
}

Warlock& Warlock::operator=(const Warlock& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_title = other ._title;
	}
	return (*this);
}

Warlock::~Warlock(void)
{
	std::map<std::string,ASpell*>::iterator it_begin = this->_map.begin();
	std::map<std::string,ASpell*>::iterator it_end = this->_map.end();
	while(it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	this->_map.clear();

	std::cout <<this->getName() <<": My job here is done!" <<std::endl;
	return ;
}

const std::string&	Warlock::getName(void) const
{
	return (this->_name);
}

const std::string&	Warlock::getTitle(void) const
{
	return (this->_title);
}

void	Warlock::setTitle(const std::string& title_ref)
{
	this->_title = title_ref;
}

void	Warlock::introduce(void) const
{
	std::cout <<this->getName() <<": I am "
		<<this->getName() <<", "
		<<this->getTitle() <<"!" <<std::endl;
	return ;
}

void	Warlock::learnSpell(ASpell* spell_ptr)
{
	if (spell_ptr)
		this->_map.insert(std::pair<std::string, ASpell*>(spell_ptr->getName(), 
			spell_ptr->clone()));
}

void	Warlock::forgetSpell(std::string spell_name)
{
	std::map<std::string, ASpell*>::iterator it = this->_map.find(spell_name);
	if (it != this->_map.end())
	{
		delete it->second;
		this->_map.erase(spell_name);
	}
}
void	Warlock::launchSpell(std::string spell_name, ATarget& target_ref)
{
	std::map<std::string, ASpell*>::iterator it = this->_map.find(spell_name);
	if (it != this->_map.end())
		this->_map[spell_name]->launch(target_ref);
}