#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
	for (std::vector<ATarget*>::iterator it = targets.begin(); it != targets.end();
		++it)
	{
		delete *it;
	}
	targets.clear();
}

void
TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
	{
		for (std::vector<ATarget*>::iterator it = targets.begin();
			it != targets.end(); ++it)
		{
			if ((*it)->getType() == target->getType())
				return;
		}
		targets.push_back(target->clone());
	}
}

void
TargetGenerator::forgetTargetType(std::string const &name)
{
	std::vector<ATarget*>::iterator it = targets.begin();
	while(it != targets.end())
	{
		if (name == (*it)->getType())
		{
			delete *it;
			it = targets.erase(it);
		}
		else
			++it;
	}
}

ATarget *TargetGenerator::createTarget(std::string const & typeName) {
	std::vector<ATarget*>::iterator ite = targets.end();
	for (std::vector<ATarget*>::iterator it = targets.begin(); it != ite; ++it) {
		if ((*it)->getType() == typeName)
			return *it;
	}
	return nullptr;
}
