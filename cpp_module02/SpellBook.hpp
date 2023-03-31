#ifndef SPELLBOOK_HPP_
#define SPELLBOOK_HPP_

#include "ASpell.hpp"
#include <map>
class SpellBook 
{
	std::map<std::string, ASpell *> spells;
	SpellBook(const SpellBook &othe);
	SpellBook &operator = (const SpellBook &ot);
	public:
	SpellBook();
	void learnSpell(ASpell *ot);
	void forgetSpell(const std::string &s);
	ASpell* createSpell(std::string const &s);
};

#endif