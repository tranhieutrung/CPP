#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
	~Fwoosh();
	Fwoosh();
	Fwoosh(const Fwoosh &other);
	Fwoosh &operator=(const Fwoosh &other);
	
	virtual Fwoosh *clone() const;


private:
	std::string _name;
	std::string _effects;

};