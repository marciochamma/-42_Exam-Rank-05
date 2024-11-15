

#ifndef ASpell_HPP
#define ASpell_HPP

#include "ATarget.hpp"
#include <iostream>
#include <map>

class ATarget;

class ASpell
{
protected:
	std::string _name;
	std::string _effects;

	ASpell(void);
	ASpell(const ASpell& copy);
	ASpell& operator=(const ASpell& other);
public:
	ASpell(std::string name, std::string effects);
	virtual ~ASpell(void);

	const std::string&	getName(void) const;
	const std::string&	getEffects(void) const;
	void	launch(const ATarget& target_ref) const;

	virtual ASpell*	clone(void) const = 0;
};

#endif