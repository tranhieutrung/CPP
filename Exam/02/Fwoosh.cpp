#include "Fwoosh.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Fwoosh::~Fwoosh() {}

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed") {
}

Fwoosh::Fwoosh(const Fwoosh &other): _name(other._name), _effects(other._effects) {}

Fwoosh &Fwoosh::operator=(const Fwoosh &other) {
	if (this != &other) {
		_name = other._name;
		_effects = other._effects;
	}
	return *this;
}

Fwoosh *Fwoosh::clone() const {
	return new Fwoosh();
}