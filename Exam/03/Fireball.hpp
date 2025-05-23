#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fireball : public ASpell
{
public:
	~Fireball();
	Fireball();
	Fireball(const Fireball &other);
	Fireball &operator=(const Fireball &other);
	
	virtual Fireball *clone() const;


private:
	std::string _name;
	std::string _effects;

};