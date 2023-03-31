
#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(): targets(){}

void TargetGenerator::learnTargetType(ATarget* t)
{
	targets.insert(std::make_pair(t->getType(), t->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
	targets.erase(type);
}

ATarget* TargetGenerator::createTarget(std::string const &type)
{
	if (targets[type])
		return targets[type]->clone();
	return NULL;
}

TargetGenerator::~TargetGenerator() {}