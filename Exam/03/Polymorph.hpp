#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
	~Polymorph();
	Polymorph();
	
	virtual Polymorph *clone() const;

};