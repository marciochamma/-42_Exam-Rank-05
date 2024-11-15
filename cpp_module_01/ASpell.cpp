

#include "ASpell.hpp"

ASpell::ASpell(void)
{
	return ;
}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects)
{
	return ;
}

ASpell::ASpell(const ASpell& copy)
{
	this->_name = copy._name;
	this->_effects = copy._effects;
	return ;
}

ASpell& ASpell::operator=(const ASpell& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_effects = other ._effects;
	}
	return (*this);
}

ASpell::~ASpell(void)
{
	return ;
}

const std::string&	ASpell::getName(void) const
{
	return (this->_name);
}

const std::string&	ASpell::getEffects(void) const
{
	return (this->_effects);
}

void	ASpell::launch(const ATarget& target_ref) const
{
	target_ref.getHitBySpell(*this);
}