#include "Warlock.hpp"


std::string  const &Warlock::getName() const
{
	return name;
}

std::string  const &Warlock::getTitle() const
{
	return title;
}

Warlock::Warlock(const std::string &na, const std::string &t) : name(na), title(t)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() { std::cout <<  name << ": My job here is done!" << std::endl;}

void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::setTitle(const std::string &ot) { 
	title = ot;
}