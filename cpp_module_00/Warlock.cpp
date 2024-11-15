

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