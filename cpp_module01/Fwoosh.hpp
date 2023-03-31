#ifndef FWOOSH_HPP_
#define FWOOSH_HPP_

#include "ASpell.hpp"

class Fwoosh  : public ASpell { 
	public:
	Fwoosh();
	~Fwoosh();
	Fwoosh *clone() const;
};
#endif