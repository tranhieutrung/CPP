#include "Fwoosh.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Fwoosh::~Fwoosh() {}

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed") {
}

Fwoosh *Fwoosh::clone() const {
	return new Fwoosh();
}