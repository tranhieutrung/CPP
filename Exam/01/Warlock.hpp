#pragma once

#include <iostream>
#include <string>

class Warlock 
{
public:
	Warlock(std::string name, std::string title);
	~Warlock();

	const std::string &getName() const;
	const std::string &getTitle() const;
	void setTitle(const std::string title);
	void introduce() const;


private:
	std::string _name;
	std::string _title;
	Warlock();
	Warlock(Warlock &other);
	Warlock &operator=(Warlock &other);
};