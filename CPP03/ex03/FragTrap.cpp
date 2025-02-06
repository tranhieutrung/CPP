/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:52:01 by hitran            #+#    #+#             */
/*   Updated: 2025/02/06 11:46:30 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamge = 30;
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamge = 30;
	std::cout << "FragTrap: Name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &source): ClapTrap(source) {
	std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << this->_name << ", you're doing an awesome job. ";
	std::cout << "High fives! 🙌" << std::endl;
}
