#include "SpellBook.hpp"
#include "ASpell.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
	for (std::map<std::string, ASpell*>::iterator it = _spells.begin(); it != _spells.end(); it++) {
		delete it->second;
	}
	_spells.clear();
}

void SpellBook::learnSpell(ASpell *spell) {
	if (!spell)
		return;
	_spells.insert(std::make_pair(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(const std::string &name) {
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end()) {
		delete it->second;
		_spells.erase(it);
	}
}

ASpell* SpellBook::createSpell(const std::string &name) {
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end()) {
		return it->second->clone();
	} else {
		return NULL;
	}
}
