

#ifndef BrickWall_HPP
#define BrickWall_HPP

#include "ATarget.hpp"
#include <iostream>
#include <map>

class BrickWall : public ATarget
{
public:
	BrickWall(void);
	~BrickWall(void);

	const std::string&	getName(void) const;
	const std::string&	getEffects(void) const;

	BrickWall*	clone(void) const;
};

#endif