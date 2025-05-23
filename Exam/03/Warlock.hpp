#pragma once

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

#include  "SpellBook.hpp"

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
	void forgetSpell(const std::string &name);
	void launchSpell(const std::string &name, ATarget &target);

private:
	std::string _name;
	std::string _title;
	SpellBook _book;
	
	Warlock();
	Warlock(Warlock &other);
	Warlock &operator=(Warlock &other);
};