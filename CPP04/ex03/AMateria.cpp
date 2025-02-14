/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:35:27 by hitran            #+#    #+#             */
/*   Updated: 2025/02/14 15:39:44 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria: Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type) {
	std::cout << "AMateria: Type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other): _type(other._type) {
	std::cout << "AMateria: Copy constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria: Destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other) {
	std::cout << "AMateria: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

std::string const & AMateria::getType() const {
	std::cout << "AMateria: getType called" << std::endl;
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
}
