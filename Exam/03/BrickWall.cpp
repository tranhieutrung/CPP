#include "BrickWall.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

BrickWall::~BrickWall() {}

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall") {}

BrickWall *BrickWall::clone() const {
	return new BrickWall();
}