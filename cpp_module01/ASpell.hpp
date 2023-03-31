#ifndef ASPELL_HPP_
#define ASPELL_HPP_

#include "ATarget.hpp"
#include <iostream>
class ATarget;
class ASpell { 
	protected:
	std::string name;
	std::string effects;

	public :
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell *clone() const = 0;
		ASpell(const std::string &name, const std::string &effects); 
		ASpell(const ASpell &oth);
		ASpell &operator=(const ASpell &oth);
		virtual ~ASpell();
		void launch(const ATarget &ot) const ;
};


#endif