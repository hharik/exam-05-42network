#ifndef POLYMORPH_HPP_
#define POLYMORPH_HPP_
#include "ASpell.hpp"

class Polymorph  : public ASpell
{
	public:
	Polymorph();
	~Polymorph();
	Polymorph *clone() const;
};

#endif