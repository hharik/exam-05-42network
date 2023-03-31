#ifndef TARGETGENERATOR_HPP_

#define TARGETGENERATOR_HPP_


#include "ATarget.hpp"
#include <map>
class TargetGenerator {
	std::map<std::string, ATarget *> targets;
	TargetGenerator &operator = (const TargetGenerator &other);
	TargetGenerator(const TargetGenerator &other);

	public:
	~TargetGenerator();
	TargetGenerator();
	void learnTargetType(ATarget* t);
	void forgetTargetType(std::string const &t);
	ATarget* createTarget(std::string const &);

};


#endif