#include "Polymorph.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Polymorph::~Polymorph() {}

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter") {
}

Polymorph::Polymorph(const Polymorph &other): _name(other._name), _effects(other._effects) {}

Polymorph &Polymorph::operator=(const Polymorph &other) {
	if (this != &other) {
		_name = other._name;
		_effects = other._effects;
	}
	return *this;
}

Polymorph *Polymorph::clone() const {
	return new Polymorph();
}