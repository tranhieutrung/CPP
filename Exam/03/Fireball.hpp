#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fireball : public ASpell
{
public:
	~Fireball();
	Fireball();
	
	virtual Fireball *clone() const;

};