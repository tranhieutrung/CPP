#include "Warlock.hpp"
#include "ASpell.hpp"

Warlock::Warlock(std::string name, std::string title):
_name(name), _title(title) {
	std::cout << _name + ": This looks like another boring day.\n";
}
Warlock::~Warlock() {
	std::cout << _name + ": My job here is done!\n";
}

const std::string &Warlock::getName() const {
	return _name;
}

const std::string &Warlock::getTitle() const {
	return _title;
}

void Warlock::setTitle(const std::string title) {
	_title = title;
};

void Warlock::introduce() const {
	std::cout << _name + ": I am " + _name + ", " + _title + "!\n";
}

void Warlock::learnSpell(ASpell *spell) {
	if (!spell)
		return;
	_spells.insert(std::make_pair(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(std::string name) {
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end()) {
		delete it->second;
		_spells.erase(it);
	}
}

void Warlock::launchSpell(std::string name, ATarget &target) {
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end()) {
		it->second->launch(target);
	}
}


// Private methods:

Warlock::Warlock() {}

Warlock::Warlock(Warlock &other): _name(other._name), _title(other._title) {}

Warlock &Warlock::operator=(Warlock &other) {
	if (this != &other) {
		_name = other._name;
		_title = other._title;
	}
	return *this;
}