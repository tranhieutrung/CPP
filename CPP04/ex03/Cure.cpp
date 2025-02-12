/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:02:13 by hitran            #+#    #+#             */
/*   Updated: 2025/02/12 14:14:54 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
	std::cout << "Cure: Default constructor called" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other) {
	std::cout << "Cure: Copy constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure: Destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &other) {
	std::cout << "Cure: Copy assignment operator called" << std::endl;
	if (this != &other) {
		AMateria::operator=(other);
	}
	return (*this);
}

Cure* Cure::clone() const {
	std::cout << "Cure: Clone function called" << std::endl;
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "Cure: * heals " << target.getName() << "’s wounds *" << std::endl;
}
