#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>
class Spellbook
{
	private:
		std::vector<ASpell*> spells;
		Spellbook(const Spellbook &rhs);
		Spellbook & operator=(const Spellbook &rhs);
	
	public:
		Spellbook();
		virtual ~Spellbook();

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellName);
		ASpell * generateSpell(std::string const &spellName);
};

#endif
