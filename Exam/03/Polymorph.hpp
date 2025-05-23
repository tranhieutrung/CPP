#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
	~Polymorph();
	Polymorph();
	Polymorph(const Polymorph &other);
	Polymorph &operator=(const Polymorph &other);
	
	virtual Polymorph *clone() const;


private:
	std::string _name;
	std::string _effects;

};