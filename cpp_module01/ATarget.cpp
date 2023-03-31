#include "ATarget.hpp"


ATarget::~ATarget() {}
ATarget::ATarget(const std::string &t) : type(t) { }
ATarget::ATarget(const ATarget &ot) {*this = ot;}
ATarget &ATarget::operator = (const ATarget &ot) { this->type = ot.type; return *this; }
std::string const &ATarget::getType() const { return type; }
void ATarget::getHitBySpell(const ASpell &ot) const { 
	std::cout << type << " has been " << ot.getEffects() << "!" << std::endl;
}
