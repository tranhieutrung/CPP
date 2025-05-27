#include "Warlock.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"

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
	_book.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string &name) {
	_book.forgetSpell(name);
}

void Warlock::launchSpell(const std::string &name, ATarget &target) {
	ASpell *a = _book.createSpell(name);
	if (a) {
		a->launch(target);
		delete a;
	}
}
