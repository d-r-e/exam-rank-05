# include "ATarget.hpp"

ATarget::ATarget(): type(){}

ATarget::ATarget(const ATarget &rhs)
{
	*this = rhs;
}

ATarget::ATarget(const std::string &type): type(type){}

ATarget::~ATarget(){}

ATarget & ATarget::operator=(const ATarget &rhs)
{
	this->type = rhs.type;
	return *this;
}

const std::string &ATarget::getType()const{
	return this->type;
}

void ATarget::getHitBySpell(ASpell const &spell)const{
	std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}
