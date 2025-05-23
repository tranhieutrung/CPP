#include "Fireball.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Fireball::~Fireball() {}

Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp") {
}

Fireball::Fireball(const Fireball &other): _name(other._name), _effects(other._effects) {}

Fireball &Fireball::operator=(const Fireball &other) {
	if (this != &other) {
		_name = other._name;
		_effects = other._effects;
	}
	return *this;
}

Fireball *Fireball::clone() const {
	return new Fireball();
}