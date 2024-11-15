

#ifndef Warlock_HPP
#define Warlock_HPP

#include <iostream>
#include <map>

class Warlock
{
private:
	std::string _name;
	std::string _title;

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
};

#endif