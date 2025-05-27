#include "TargetGenerator.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
	for (std::map<std::string, ATarget*>::iterator it = _targets.begin(); it != _targets.end(); it++) {
		delete it->second;
	}
	_targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *target) {
	if (!target)
		return;
	_targets.insert(std::make_pair(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string &type) {
	std::map<std::string, ATarget*>::iterator it = _targets.find(type);
	if (it != _targets.end()) {
		delete it->second;
		_targets.erase(it);
	}
}

ATarget* TargetGenerator::createTarget(const std::string &type) {
	std::map<std::string, ATarget*>::iterator it = _targets.find(type);
	if (it != _targets.end()) {
		return it->second->clone();
	} else {
		return NULL;
	}
}
