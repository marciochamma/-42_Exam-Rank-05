

#ifndef Dummy_HPP
#define Dummy_HPP

#include "ATarget.hpp"
#include <iostream>
#include <map>

class Dummy : public ATarget
{
public:
	Dummy(void);
	~Dummy(void);

	const std::string&	getName(void) const;
	const std::string&	getEffects(void) const;

	Dummy*	clone(void) const;
};

#endif