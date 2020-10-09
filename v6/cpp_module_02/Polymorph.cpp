#include "Polymorph.hpp"

Polymorph::Polymorph():ASpell("Polymorph", "polymorphed") {}

Polymorph::~Polymorph(){}

ASpell *Polymorph::clone()const{
	return (new Polymorph(*this));
}
