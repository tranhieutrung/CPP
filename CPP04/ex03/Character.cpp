/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:35:19 by hitran            #+#    #+#             */
/*   Updated: 2025/02/12 14:15:36 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("Nonamed"), _inventory() {
	std::cout << "Character: Default constructor called" << std::endl;
}

Character::Character(const std::string &name): _name(name), _inventory() {
	std::cout << "Character: Name constructor called" << std::endl;
}

Character::Character(const Character &other): _name(other._name) {
	std::cout << "Character: Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if(other._inventory[i]) {
			this->_inventory[i] = other._inventory[i]->clone();
		}
	}
}

Character::~Character() {
	std::cout << "Character: Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

Character &Character::operator=(const Character &other) {
	std::cout << "Character: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		for (int i = 0; i < 4; i++) {
			if(other._inventory[i]) {
				this->_inventory[i] = other._inventory[i]->clone();
			}
		}
	}
	return (*this);
}
