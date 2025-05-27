#include "Polymorph.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Polymorph::~Polymorph() {}

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter") {
}

Polymorph *Polymorph::clone() const {
	return new Polymorph();
}