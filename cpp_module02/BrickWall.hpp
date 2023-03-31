
#ifndef BRICKWALL_HPP_

#define BRICKWALL_HPP_

#include "ATarget.hpp"

class BrickWall : public ATarget { 
	public:
		BrickWall();
		~BrickWall();
		BrickWall *clone() const;
};



#endif