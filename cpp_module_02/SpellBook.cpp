

#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{
	return ;
}

SpellBook::SpellBook(const SpellBook& copy)
{
	*this = copy;
	return ;
}

SpellBook& SpellBook::operator=(const SpellBook& other)
{
	if (this != &other)
	{
		this->_mapBook = other._mapBook;
	}
	return (*this);
}

SpellBook::~SpellBook(void)
{
	std::map<std::string,ASpell*>::iterator it_begin = this->_mapBook.begin();
	std::map<std::string,ASpell*>::iterator it_end = this->_mapBook.end();
	while(it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	this->_mapBook.clear();

	return ;
}

void	SpellBook::learnSpell(ASpell* spell_ptr)
{
	if (spell_ptr)
		this->_mapBook.insert(std::pair<std::string, ASpell*>(spell_ptr->getName(), 
			spell_ptr->clone()));
}

void	SpellBook::forgetSpell(const std::string& spell_name)
{
	std::map<std::string, ASpell*>::iterator it = this->_mapBook.find(spell_name);
	if (it != this->_mapBook.end())
	{
		delete it->second;
		this->_mapBook.erase(spell_name);
	}
}

ASpell*	SpellBook::createSpell(const std::string& spell_name)
{
	std::map<std::string, ASpell*>::iterator it = this->_mapBook.find(spell_name);
	if (it != this->_mapBook.end())
		return (this->_mapBook[spell_name]);
	else
		return (NULL);
}
