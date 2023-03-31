#ifndef DUMMY_HPP_
#define DUMMY_HPP_

#include "ATarget.hpp"


class Dummy : public ATarget  { 
	public :
		Dummy();
		~Dummy();
		Dummy *clone() const;
};


#endif