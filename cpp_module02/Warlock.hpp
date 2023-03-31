#ifndef WARLOCK_HPP_

#define WARLOCK_HPP_

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include "SpellBook.hpp"

class Warlock {
	std::string name;
	std::string title;

	SpellBook spells;
	Warlock();
	Warlock(const Warlock &oth);
	Warlock &operator=(const Warlock &oth);
	public:

	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &t);
	Warlock(const std::string &n, const std::string &t);
	~Warlock();
	void introduce() const;
	void learnSpell(ASpell *s);
	void forgetSpell(std::string spellname);
	void launchSpell(std::string spellname, const ATarget &target);
};




#endif