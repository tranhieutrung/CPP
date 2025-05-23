#include "TargetGenerator.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
}

void TargetGenerator::learnTargetType(ATarget *target) {
	if (!target)
		return;
	_targets.insert(std::make_pair(target->getType(), target));
}

void TargetGenerator::forgetTargetType(std::string &type) {
	std::map<std::string, ATarget*>::iterator it = _targets.find(type);
	if (it != _targets.end()) {
		delete it->second;
		_targets.erase(it);
	}
}

ATarget* TargetGenerator::createTarget(const std::string &type) {
	if (type == "Target Practice Dummy") {
		return new Dummy();
	} else if (type == "Inconspicuous Red-brick Wall") {
		return new BrickWall();
	} else {
		return NULL;
	}
}


// Private methods:

TargetGenerator::TargetGenerator(TargetGenerator &other)
: _targets(other._targets) {}

TargetGenerator &TargetGenerator::operator=(TargetGenerator &other) {
	if (this != &other) {
		_targets = other._targets;
	}
	return *this;
}