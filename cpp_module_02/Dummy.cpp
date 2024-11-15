

#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy")
{
	return ;
}

Dummy::~Dummy(void)
{
	return ;
}

Dummy*	Dummy::clone(void) const
{
	Dummy* newDummy = new Dummy();
	return (newDummy);
}