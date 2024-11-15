

#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp")
{
	return ;
}

Fireball::~Fireball(void)
{
	return ;
}

Fireball*	Fireball::clone(void) const
{
	Fireball* newFireball = new Fireball();
	return (newFireball);
}
