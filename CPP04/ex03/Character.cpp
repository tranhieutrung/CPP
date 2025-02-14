/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:54:20 by hitran            #+#    #+#             */
/*   Updated: 2025/02/14 14:52:42 by hitran           ###   ########.fr       */
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
		if (this->_inventory[idx]) {
			std::cout << "Character: Inventory No." << idx + 1;
			std::cout << " was destroyed" << std::endl;
			delete this->_inventory[idx];
		}
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
	std::cout << "Character: Inventory full" << std::endl;
	delete m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx]) {
		std::cout << "Character: inventory No." << idx + 1;
		std::cout << ": unequip called" << std::endl;
		this->_inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx]) {
		std::cout << "Character: inventory No." << idx + 1;
		std::cout << ": use called" << std::endl;
		this->_inventory[idx]->use(target);
	}
}

AMateria *Character::getInventory(int idx) {
	std::cout << "Character: getInventory called" << std::endl;
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		return this->_inventory[idx];
	return (nullptr);
}
