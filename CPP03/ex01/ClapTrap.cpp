/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:01:02 by hitran            #+#    #+#             */
/*   Updated: 2025/02/06 09:38:12 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): 
						_name("Nonamed"),
						_hitPoints(10),
						_energyPoints(10),
						_attackDamge(0) {
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name):
						_name(name),
						_hitPoints(10),
						_energyPoints(10),
						_attackDamge(0) {
	std::cout << "ClapTrap: Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source) {
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = source;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamge = other._attackDamge;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints < 1) {
		std::cout << "ClapTrap " << this->_name;
		std::cout << " has no hit points to attack" << std::endl;
	} else	if (this->_energyPoints < 1) {
		std::cout << "ClapTrap " << this->_name;
		std::cout << " has no energy points to attack" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamge;
		std::cout << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " takes " << amount;
	std::cout << " hit points of damage!" << std::endl;
	if (this->_hitPoints > amount) {
		this->_hitPoints -= amount;
	} else {
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " died!" << std::endl;		
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints < 1) {
		std::cout << "ClapTrap " << this->_name;
		std::cout << " has no hit points to be repaired" << std::endl;
	} else if (this->_energyPoints < 1) {
		std::cout << "ClapTrap " << this->_name;
		std::cout << " has no energy points to be repaired" << std::endl;
	} else {
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " is repaired and gets ";
		std::cout << amount << " hit points back!"<< std::endl;
	}
}
