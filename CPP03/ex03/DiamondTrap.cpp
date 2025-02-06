/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:52:01 by hitran            #+#    #+#             */
/*   Updated: 2025/02/06 11:44:54 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), FragTrap(), ScavTrap() {
	this->_name = "Nonamed";
	ClapTrap::_name = "Nonamed_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamge = FragTrap::_attackDamge;
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name): 
	ClapTrap(name + "_clap_name"),
	FragTrap(name),
	ScavTrap(name),
	_name(name) {
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamge = FragTrap::_attackDamge;
	std::cout << "DiamondTrap: Name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &source): ClapTrap(source),
	FragTrap(source),
	ScavTrap(source), 
	_name(source._name){
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &source) {
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	if (this != &source) {
		ClapTrap::operator=(source);
		FragTrap::operator=(source);
		ScavTrap::operator=(source);
		this->_name = source._name;
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hi! I am " << this->_name << ", a DiamondTrap. ";
	std::cout << "My ClapTrap name is " << this->ClapTrap::_name << ".";
	std::cout << std::endl;
}
