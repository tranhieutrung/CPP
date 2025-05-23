#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class BrickWall : public ATarget
{
public:
	~BrickWall();
	BrickWall();
	BrickWall(const BrickWall &other);
	BrickWall &operator=(const BrickWall &other);


	virtual BrickWall *clone() const;

private:
	std::string _type;

};