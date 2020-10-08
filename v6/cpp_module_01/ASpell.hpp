#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"
class ATarget;
class ASpell
{
	private:
		std::string name, effects;

		ASpell();
	
	public:
		ASpell(const ASpell &rhs);
		ASpell & operator=(const ASpell &rhs);
		ASpell(std::string const &name, std::string const &effects);
		virtual ~ASpell();

		std::string const &getEffects()const;
		std::string const &getName()const;

		void launch(ATarget const &target) const;
		virtual ASpell *clone()const = 0;
};

#endif
