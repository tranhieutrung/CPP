#include "BrickWall.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

BrickWall::~BrickWall() {}

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::BrickWall(const BrickWall &other): _type(other._type) {}

BrickWall &BrickWall::operator=(const BrickWall &other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

BrickWall *BrickWall::clone() const {
	return new BrickWall();
}