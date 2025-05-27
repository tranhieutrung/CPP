#pragma once

#include <iostream>
#include <string>

class ATarget;

class ASpell 
{
public:
	ASpell(std::string name, std::string effects);
	virtual ~ASpell();
	ASpell();
	ASpell(const ASpell &other);
	ASpell &operator=(const ASpell &other);
	
	const std::string &getName() const;
	const std::string &getEffects() const;

	virtual ASpell *clone() const = 0;

	void launch(const ATarget &target) const;

protected:
	std::string _name;
	std::string _effects;

};