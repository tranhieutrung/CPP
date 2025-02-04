/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:52:01 by hitran            #+#    #+#             */
/*   Updated: 2025/02/04 14:37:01 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamge = 20;
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamge = 20;
	std::cout << "ScavTrap: Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &source): ClapTrap(source) {
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = source;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints < 1) {
		std::cout << "ScavTrap " << this->_name;
		std::cout << " has no hit points to attack" << std::endl;
	} else	if (this->_energyPoints < 1) {
		std::cout << "ScavTrap " << this->_name;
		std::cout << " has no energy points to attack" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamge;
		std::cout << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void	ScavTrap::guardGate(void) {
	if (this->_hitPoints < 1) {
		std::cout << "ScavTrap " << this->_name;
		std::cout << " is already dead!" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->_name;
		std::cout << " is now in Gate keeper mode!" << std::endl;
	}
}
