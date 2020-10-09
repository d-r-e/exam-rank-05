#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
class Warlock
{
	private:
		std::string name, title;
		Spellbook sb;
		Warlock();
		Warlock(const Warlock &rhs);
		Warlock & operator=(const Warlock &rhs);
	
	public:
		Warlock(std::string const &name, std::string const &title);
		virtual ~Warlock();

		std::string const &getTitle()const;
		std::string const &getName()const;
		void setTitle(std::string const &title);

		void introduce()const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellName);
		void launchSpell(std::string const &spellName, ATarget const &target);
};

#endif
