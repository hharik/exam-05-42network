#include "ASpell.hpp"

std::string ASpell::getName() const {return name;}

std::string ASpell::getEffects() const {return  effects;}

ASpell::ASpell(const std::string &na, const std::string &effect)  : name(na), effects(effect){

} 

ASpell::ASpell(const ASpell &oth) { *this = oth;}

ASpell &ASpell::operator=(const ASpell &oth) { 
	this->name = oth.name;
	this->effects = oth.effects;
	return  *this;
}

void ASpell::launch(const ATarget &ot) const {
	ot.getHitBySpell(*this);
}
ASpell::~ASpell() {}