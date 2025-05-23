#pragma once

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

class SpellBook;
class ASpell;
class ATarget;

class TargetGenerator 
{
public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget *target);
	void forgetTargetType(std::string &type);
	ATarget* createTarget(const std::string &type);

private:
	std::map<std::string, ATarget*> _targets;
	

	TargetGenerator(TargetGenerator &other);
	TargetGenerator &operator=(TargetGenerator &other);
};