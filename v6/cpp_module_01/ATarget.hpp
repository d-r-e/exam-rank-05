#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"
#include <iostream>
class ASpell;

class ATarget
{
	private:
		std::string type;

		ATarget();
	
	public:
		ATarget(const ATarget &rhs);
		ATarget & operator=(const ATarget &rhs);
		ATarget(std::string const &type);
		virtual ~ATarget();

		std::string const &getType()const;

		void getHitBySpell(ASpell const &spell) const;
		virtual ATarget *clone()const = 0;
};

#endif
