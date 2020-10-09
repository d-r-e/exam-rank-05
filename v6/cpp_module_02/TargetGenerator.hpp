#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>
class TargetGenerator
{
	private:
		std::vector<ATarget*> targets;
		TargetGenerator(const TargetGenerator &rhs);
		TargetGenerator & operator=(const TargetGenerator &rhs);
	
	public:
		TargetGenerator();
		virtual ~TargetGenerator();

		void learnTargetType(ATarget *type);
		void forgetTargetType(std::string const &name);
		ATarget *createTarget(std::string const &name);
};

#endif