#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
	:name(name), title(title)
{
	std::cout << this->name << ": This is another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!\n";
}

std::string const & Warlock::getName()const{
	return this->name;
}

std::string const &Warlock::getTitle()const{
	return this->title;
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce() const{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void
Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		for (std::vector<ASpell*>::iterator it = spells.begin();
			it != spells.end(); ++it)
		{
			if ((*it)->getName() == spell->getName())
				return;
		}
		spells.push_back(spell->clone());
	}
}

void
Warlock::forgetSpell(std::string const &spellName)
{
	std::vector<ASpell*>::iterator it = spells.begin();
	while(it != spells.end())
	{
		if (spellName == (*it)->getName())
		{
			delete *it;
			it = spells.erase(it);
		}
		else
			++it;
	}
}

void
Warlock::launchSpell(std::string const &spellName, ATarget const &target)
{
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != spells.end(); ++it)
	{
		if ((*it)->getName() == spellName)
		{
			(*it)->launch(target);
			return;
		}
	}
}
