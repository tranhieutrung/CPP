#pragma once

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

class ASpell;
class ATarget;

class SpellBook 
{
public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell *spell);
	void forgetSpell(const std::string &name);
	ASpell* createSpell(const std::string &name);

private:
	std::map<std::string, ASpell*> _spells;
	
	SpellBook(SpellBook &other);
	SpellBook &operator=(SpellBook &other);
};