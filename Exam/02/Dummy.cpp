#include "Dummy.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Dummy::~Dummy() {}

Dummy::Dummy(): ATarget("Target Practice Dummy") {}

Dummy::Dummy(const Dummy &other): _type(other._type) {}

Dummy &Dummy::operator=(const Dummy &other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

Dummy *Dummy::clone() const {
	return new Dummy();
}