

#ifndef SpellBook_HPP
#define SpellBook_HPP

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <iostream>
#include <map>

class SpellBook
{
private:
	std::map<std::string, ASpell*> _mapBook;

	SpellBook(const SpellBook& copy);
	SpellBook& operator=(const SpellBook& other);
public:
	SpellBook(void);
	~SpellBook(void);

	void	learnSpell(ASpell* spell_ptr);
	void	forgetSpell(const std::string& spell_name);
	ASpell*	createSpell(const std::string& spell_name);
};

#endif