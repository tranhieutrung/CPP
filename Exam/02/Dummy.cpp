#include "Dummy.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Dummy::~Dummy() {}

Dummy::Dummy(): ATarget("Target Practice Dummy") {}

Dummy *Dummy::clone() const {
	return new Dummy();
}