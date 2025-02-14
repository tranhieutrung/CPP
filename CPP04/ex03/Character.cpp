/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:54:20 by hitran            #+#    #+#             */
/*   Updated: 2025/02/14 11:56:13 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("Nonamed") {
	std::cout << "Character: Default constructor called" << std::endl;
	for (int idx = 0; idx < 4; idx++) {
		this->_inventory[idx] = nullptr;
	}
}

Character::Character(const std::string &name): _name(name) {
	std::cout << "Character: Name constructor called" << std::endl;
	for (int idx = 0; idx < 4; idx++) {
		this->_inventory[idx] = nullptr;
	}
}

Character::Character(const Character &other): _name(other._name) {
	std::cout << "Character: Copy constructor called" << std::endl;
	for (int idx = 0; idx < 4; idx++) {
		if (other._inventory[idx]) {
			this->_inventory[idx] = other._inventory[idx]->clone();
		} else {
			this->_inventory[idx] = nullptr;
		}
	}
}

Character::~Character() {
	std::cout << "Character: Destructor called" << std::endl;
	for (int idx = 0; idx < 4; idx++) {
		std::cout << "Character: Inventory No." << idx + 1 << " was destroyed";
		std::cout << std::endl;
		delete this->_inventory[idx];
	}
}

Character &Character::operator=(const Character &other) {
	std::cout << "Character: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		for (int idx = 0; idx < 4; idx++) {
			delete this->_inventory[idx];
			if (other._inventory[idx]) {
				this->_inventory[idx] = other._inventory[idx]->clone();
			} else {
				this->_inventory[idx] = nullptr;
			}
		}
	}
	return (*this);
}

std::string const &Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	std::cout << "Character: equip called" << std::endl;
	for (int idx = 0; idx < 4; idx++) {
		if(!this->_inventory[idx]) {
			this->_inventory[idx] = m->clone();
			delete m;
			return ;
		}
	}
	delete m;
}

void Character::unequip(int idx) {
	std::cout << "Character: unequip called" << std::endl;
	if (idx >= 0 && idx < 4 && this->_inventory[idx]) {
		this->_inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target) {
	std::cout << "Character: use called" << std::endl;
	if (idx >= 0 && idx < 4 && this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
	}
}

AMateria *Character::getInventory(int idx) {
	std::cout << "Character: getInventory called" << std::endl;
	if (idx >= 0 && idx < 4)
		return this->_inventory[idx];
	return (nullptr);
}
