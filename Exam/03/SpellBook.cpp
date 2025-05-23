#include "SpellBook.hpp"
#include "ASpell.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

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
	if (name == "Fwoosh")
		return new Fwoosh();
	else if (name == "Fireball")
		return new Fireball();
	else if (name == "Polymorph")
		return new Polymorph();
	else
		return NULL;
}

void SpellBook::clean() {
	for (std::map<std::string, ASpell*>::iterator it = _spells.begin(); it != _spells.end(); it++) {
		delete it->second;
	}
	_spells.clear();
}
// Private methods:

SpellBook::SpellBook(SpellBook &other): _spells(other._spells) {}

SpellBook &SpellBook::operator=(SpellBook &other) {
	if (this != &other && _spells != other._spells) {
		_spells = other._spells;
	}
	return *this;
}