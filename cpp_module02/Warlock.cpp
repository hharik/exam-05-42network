#include "Warlock.hpp"


std::string const &Warlock::getName() const { return name; }
std::string const &Warlock::getTitle() const {return title; }
void Warlock::setTitle(std::string const &t) {title = t;}
Warlock::Warlock(const std::string &n, const std::string &t) : name(n), title(t), spells() {
	std::cout << name << ": This looks like another boring day." << std::endl;

}
Warlock::~Warlock() {std::cout << name << ": My job here is done!" << std::endl;}
void Warlock::introduce() const { std::cout << name << ": I am " << name << ", "  << title << "!"<< std::endl;}


void Warlock::learnSpell(ASpell *s){ 
	spells.learnSpell(s);
}

void Warlock::forgetSpell(std::string spellname) { 
	spells.forgetSpell(spellname);
}

void Warlock::launchSpell(std::string spellname, const ATarget &target) {
	ASpell *lan = spells.createSpell(spellname);
	lan->launch(target);
}





