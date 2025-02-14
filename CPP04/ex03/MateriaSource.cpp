/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:54:20 by hitran            #+#    #+#             */
/*   Updated: 2025/02/14 13:28:14 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource: Default constructor called" << std::endl;
	for (int idx = 0; idx < 4; idx++) {
		this->_inventory[idx] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	std::cout << "MateriaSource: Copy constructor called" << std::endl;
	for (int idx = 0; idx < 4; idx++) {
		if (other._inventory[idx]) {
			this->_inventory[idx] = other._inventory[idx]->clone();
		} else {
			this->_inventory[idx] = nullptr;
		}
	}
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource: Destructor called" << std::endl;
	for (int idx = 0; idx < 4; idx++) {
		if (this->_inventory[idx]) {
			std::cout << "MateriaSource: Inventory No." << idx + 1;
			std::cout << " was destroyed" << std::endl;
			delete this->_inventory[idx];
			this->_inventory[idx] = nullptr;
		}
		
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	std::cout << "MateriaSource: Copy assignment operator called" << std::endl;
	if (this != &other) {
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

void MateriaSource::learnMateria(AMateria* m) {
	std::cout << "MateriaSource: learnMateria called" << std::endl;
	for (int idx = 0; idx < 4; idx++) {
		if(!this->_inventory[idx]) {
			std::cout << "MateriaSource: inventory No.";
			std::cout << idx + 1 << " learnt." << std::endl;
			this->_inventory[idx] = m;
			return ;
		}
	}
	std::cout << "MateriaSource: learnMateria failed" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	std::cout << "MateriaSource: createMateria called" << std::endl;
	for (int idx = 0; idx < 4; idx++) {
		if(this->_inventory[idx] && this->_inventory[idx]->getType() == type) {
			return (this->_inventory[idx]->clone());
		}
	}
	std::cout << "MateriaSource: createMateria failed" << std::endl;
	return (0);
}
