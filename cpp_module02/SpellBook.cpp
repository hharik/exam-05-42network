#include "SpellBook.hpp"

SpellBook::SpellBook() : spells() { }
void SpellBook::learnSpell(ASpell *ot) {
	spells.insert(std::make_pair(ot->getName(), ot->clone()));
}

void SpellBook::forgetSpell(const std::string &s) {
	spells.erase(s);
}

ASpell* SpellBook::createSpell(std::string const &s) {
	if (spells[s])
		return spells[s]->clone();
	return NULL;
}