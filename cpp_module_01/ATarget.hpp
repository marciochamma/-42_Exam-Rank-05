

#ifndef ATarget_HPP
#define ATarget_HPP

#include "ASpell.hpp"
#include <iostream>
#include <map>

class ASpell;

class ATarget
{
protected:
	std::string _type;

	ATarget(void);
	ATarget(const ATarget& copy);
	ATarget& operator=(const ATarget& other);
public:
	ATarget(std::string type);
	virtual ~ATarget(void);

	const std::string&	getType(void) const;
	void	getHitBySpell(const ASpell& spell_ref) const;

	virtual ATarget*	clone(void) const = 0;
};

#endif