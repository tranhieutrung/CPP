#pragma once

#include <iostream>
#include <string>

class ASpell;

class ATarget 
{
public:
	ATarget(std::string name);
	virtual ~ATarget();
	ATarget();
	ATarget(const ATarget &other);
	ATarget &operator=(const ATarget &other);

	const std::string &getType() const;

	virtual ATarget *clone() const = 0;

	void getHitBySpell(const ASpell &spell) const;

private:
	std::string _type;

};