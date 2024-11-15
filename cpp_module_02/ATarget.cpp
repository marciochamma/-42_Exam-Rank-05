

#include "ATarget.hpp"

ATarget::ATarget(void)
{
	return ;
}

ATarget::ATarget(std::string type) : _type(type)
{
	return ;
}

ATarget::ATarget(const ATarget& copy)
{
	this->_type = copy._type;
	return ;
}

ATarget& ATarget::operator=(const ATarget& other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

ATarget::~ATarget(void)
{
	return ;
}

const std::string&	ATarget::getType(void) const
{
	return (this->_type);
}

void	ATarget::getHitBySpell(const ASpell& spell_ref) const
{
	std::cout <<this->getType() <<" has been "
		<<spell_ref.getEffects() <<"!" <<std::endl;
}