#ifndef ATARGET_HPP_
#define ATARGET_HPP_

#include "ASpell.hpp"
#include <iostream>

class ASpell;
class ATarget {
	protected:
	std::string type;
	public :
		ATarget(const std::string &t);
		ATarget(const ATarget &ot);
		ATarget &operator = (const ATarget &ot);
		virtual ATarget *clone() const = 0;
		std::string const &getType() const;
		void getHitBySpell(const ASpell &ot) const ;
		virtual  ~ATarget();
	};


#endif