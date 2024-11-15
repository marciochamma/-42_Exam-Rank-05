

#ifndef Polymorph_HPP
#define Polymorph_HPP

#include "ASpell.hpp"
#include <iostream>
#include <map>

class Polymorph : public ASpell
{
public:
	Polymorph(void);
	~Polymorph(void);

	const std::string&	getName(void) const;
	const std::string&	getEffects(void) const;

	Polymorph*	clone(void) const;
};

#endif