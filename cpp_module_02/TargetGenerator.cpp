

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{
	return ;
}

TargetGenerator::TargetGenerator(const TargetGenerator& copy)
{
	*this = copy;
	return ;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& other)
{
	if (this != &other)
	{
		this->_mapTarget = other._mapTarget;
	}
	return (*this);
}

TargetGenerator::~TargetGenerator(void)
{
	return ;
}

void	TargetGenerator::learnTargetType(ATarget* target_ptr)
{
	if (target_ptr)
		this->_mapTarget[target_ptr->getType()] = target_ptr;
}

void	TargetGenerator::forgetTargetType(const std::string& target_type)
{
	std::map<std::string, ATarget*>::iterator it = this->_mapTarget.find(target_type);
	if (it != this->_mapTarget.end())
		this->_mapTarget.erase(target_type);
}

ATarget*	TargetGenerator::createTarget(const std::string& target_type)
{
	if (this->_mapTarget.find(target_type) != this->_mapTarget.end())
		return (this->_mapTarget[target_type]);
	else
		return (NULL);
}
