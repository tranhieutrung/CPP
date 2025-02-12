/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:14:58 by hitran            #+#    #+#             */
/*   Updated: 2025/02/10 15:11:03 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() {
	std::cout << "ICharacter: Default constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &other) {
	std::cout << "ICharacter: Copy constructor called" << std::endl;
	*this = other;
}

ICharacter::~ICharacter() {
	std::cout << "ICharacter: Destructor called" << std::endl;
}

ICharacter &ICharacter::operator=(const ICharacter &other) {
	std::cout << "ICharacter: Copy assignment operator called" << std::endl;
	if (this != &other) {
		
	}
	return (*this);
}

ICharacter::~ICharacter() {}

std::string const & ICharacter::getName() const {
	
}

void ICharacter::equip(ICharacter* m) {

}

void ICharacter::unequip(int idx) {

}

void ICharacter::use(int idx, ICharacter& target) {

}
