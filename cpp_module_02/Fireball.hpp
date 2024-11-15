

#ifndef Fireball_HPP
#define Fireball_HPP

#include "ASpell.hpp"
#include <iostream>
#include <map>

class Fireball : public ASpell
{
public:
	Fireball(void);
	~Fireball(void);

	const std::string&	getName(void) const;
	const std::string&	getEffects(void) const;

	Fireball*	clone(void) const;
};

#endif