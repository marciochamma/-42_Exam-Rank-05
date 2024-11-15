

#ifndef Warlock_HPP
#define Warlock_HPP

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <iostream>
#include <map>

class Warlock
{
private:
	std::string _name;
	std::string _title;
	std::map<std::string, ASpell*> _map;

	Warlock(void);
	Warlock(const Warlock& copy);
	Warlock& operator=(const Warlock& other);
public:
	Warlock(std::string name, std::string title);
	~Warlock(void);

	const std::string&	getName(void) const;
	const std::string&	getTitle(void) const;
	void	setTitle(const std::string& title_ref);
	void	introduce(void) const;

	void	learnSpell(ASpell* spell_ptr);
	void	forgetSpell(std::string spell_name);
	void	launchSpell(std::string spell_name, ATarget& target_ref);
};

#endif