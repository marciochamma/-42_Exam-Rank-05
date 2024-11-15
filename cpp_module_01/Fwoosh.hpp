

#ifndef Fwoosh_HPP
#define Fwoosh_HPP

#include "ASpell.hpp"
#include <iostream>
#include <map>

class Fwoosh : public ASpell
{
public:
	Fwoosh(void);
	~Fwoosh(void);

	const std::string&	getName(void) const;
	const std::string&	getEffects(void) const;

	Fwoosh*	clone(void) const;
};

#endif