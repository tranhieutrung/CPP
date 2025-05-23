#pragma once

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

class ASpell;
class ATarget;

class Warlock 
{
public:
	Warlock(std::string name, std::string title);
	~Warlock();

	const std::string &getName() const;
	const std::string &getTitle() const;
	void setTitle(const std::string title);
	void introduce() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string name);
	void launchSpell(std::string name, ATarget &target);

private:
	std::string _name;
	std::string _title;
	std::map<std::string, ASpell*> _spells;
	
	Warlock();
	Warlock(Warlock &other);
	Warlock &operator=(Warlock &other);
};