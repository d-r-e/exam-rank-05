#include "ASpell.hpp"

ASpell::ASpell(): name(), effects() {}

ASpell::ASpell(const std::string &name, const std::string &effects):
	name(name), effects(effects) {}

ASpell::~ASpell() {}

ASpell::ASpell(const ASpell &rhs){
	*this = rhs;
}

ASpell & ASpell::operator=(const ASpell &rhs){
	this->name = rhs.name;
	this->effects = rhs.effects;
	return *this;
}

const std::string &ASpell::getName() const{
	return this->name;
}
const std::string &ASpell::getEffects()const{
	return this->effects;
}

void ASpell::launch(ATarget const &target)const{
	target.getHitBySpell(*this);
}