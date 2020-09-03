#include "Warlock.hpp"

Warlock::Warlock(): name(), title(){}

Warlock::Warlock(const std::string &name, const std::string &title): name(name), title(title)
{
	std::cout << "What a boring day" << std::endl;
}

Warlock::~Warlock(){
	std::cout << this->name << ": My job here is done!\n";
	std::vector<ASpell*>::iterator it = this->spells.begin();
	std::vector<ASpell*>::iterator itt = this->spells.end();
	while(it != itt)
	{
		delete *it;
		++it;
	}
	this->spells.clear();
}

Warlock::Warlock(const Warlock &rhs)
{
	std::cout << "What a boring day" << std::endl;
	*this = rhs;
}

Warlock &Warlock::operator=(const Warlock &rhs)
{
	this->name = rhs.name;
	this->title = rhs.title;
	return *this;
}

std::string const &Warlock::getName()const{
	return this->name;
}
		std::string const &Warlock::getTitle()const{
	return this->title;
}

void Warlock::introduce()const{
	std::cout << "My name is " << this->name << " , " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell){
	if (!spell)
		return;
	std::vector<ASpell*>::iterator it = this->spells.begin();
	std::vector<ASpell*>::iterator itt = this->spells.end();
	while (it != itt)
	{
		if ((*it)->getName() == spell->getName())
			return ;
		++it;
	}
	this->spells.push_back(spell->clone());
}

void Warlock::forgetSpell(std::string spellName){
	std::vector<ASpell*>::iterator it = this->spells.begin();
	std::vector<ASpell*>::iterator itt = this->spells.end();

	while (it != itt)
	{
		if (spellName == (*it)->getName())
		{
			delete *it;
			spells.erase(it);
			return;
		}
		++it;
	}
}

void Warlock::launchSpell(std::string spellName, ATarget const &target)
{
	std::vector<ASpell*>::iterator it = this->spells.begin();
	std::vector<ASpell*>::iterator itt = this->spells.end();
	while (it != itt)
	{
		if (spellName == (*it)->getName())
		{
			(*it)->launch(target);
			return;
		}
		++it;
	}	
}