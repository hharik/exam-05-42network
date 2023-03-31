#ifndef FIREBALL_HPP_
#define FIREBALL_HPP_

#include "ASpell.hpp"

class Fireball : public ASpell{
	public:
		Fireball();
		~Fireball();
		Fireball *clone() const;
};

#endif