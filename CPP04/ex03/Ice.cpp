/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:35:19 by hitran            #+#    #+#             */
/*   Updated: 2025/02/12 14:15:36 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	std::cout << "Ice: Default constructor called" << std::endl;
}

Ice::Ice(const Ice &other): AMateria(other) {
	std::cout << "Ice: Copy constructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice: Destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other) {
	std::cout << "Ice: Copy assignment operator called" << std::endl;
	if (this != &other) {
		AMateria::operator=(other);
	}
	return (*this);
}

Ice* Ice::clone() const {
	std::cout << "Ice: Clone function called" << std::endl;
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "Ice: * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
