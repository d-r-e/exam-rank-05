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
	sb.learnSpell(spell);
}

void
Warlock::forgetSpell(std::string const &spellName)
{
	sb.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string const &spellName, ATarget const &target) {
	
	ASpell *spell = sb.generateSpell(spellName);
	const ATarget *tar = &target;
	if (spell && tar)
		spell->launch(target);
}
