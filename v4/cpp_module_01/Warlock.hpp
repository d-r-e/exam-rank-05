#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
#include "ASpell.hpp"
# include <vector>
class Warlock
{
	private:
		std::string name;
		std::string title;
		std::vector<ASpell*> spells;
	public:
		Warlock();
		Warlock(const std::string &name, const std::string &title);
		virtual ~Warlock();
		Warlock(const Warlock &rhs);
		Warlock & operator=(const Warlock & rhs);

		void introduce() const;
		std::string const &getName()const;
		std::string const &getTitle()const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, ATarget const &target);
};

#endif