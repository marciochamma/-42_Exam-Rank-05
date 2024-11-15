

#include "Polymorph.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter")
{
	return ;
}

Polymorph::~Polymorph(void)
{
	return ;
}

Polymorph*	Polymorph::clone(void) const
{
	Polymorph* newPolymorph = new Polymorph();
	return (newPolymorph);
}
