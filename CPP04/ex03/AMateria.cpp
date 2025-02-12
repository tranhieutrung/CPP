/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:14:58 by hitran            #+#    #+#             */
/*   Updated: 2025/02/10 15:11:03 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria: Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type) {
	std::cout << "AMateria: Type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other) {
	std::cout << "AMateria: Copy constructor called" << std::endl;
	*this = other;
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

std::string const & getType() const {

}

AMateria* AMateria::clone() const {

}

void AMateria::use(ICharacter& target) {

}
