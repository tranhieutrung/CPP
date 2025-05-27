#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	~Dummy();
	Dummy();
	virtual Dummy *clone() const;

};