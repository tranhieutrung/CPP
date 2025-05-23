#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	~Dummy();
	Dummy();
	Dummy(const Dummy &other);
	Dummy &operator=(const Dummy &other);


	virtual Dummy *clone() const;

private:
	std::string _type;

};