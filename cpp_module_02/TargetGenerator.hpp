

#ifndef TargetGenerator_HPP
#define TargetGenerator_HPP

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <iostream>
#include <map>

class TargetGenerator
{
private:
	std::map<std::string, ATarget*> _mapTarget;

	TargetGenerator(const TargetGenerator& copy);
	TargetGenerator& operator=(const TargetGenerator& other);
public:
	TargetGenerator(void);
	~TargetGenerator(void);

	void	learnTargetType(ATarget* target_ptr);
	void	forgetTargetType(const std::string& target_type);
	ATarget*	createTarget(const std::string& target_type);
};

#endif