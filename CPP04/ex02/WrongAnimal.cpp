/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:16:17 by hitran            #+#    #+#             */
/*   Updated: 2025/02/17 15:06:52 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongUnknown") {
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal: ba ba ba banana" << std::endl;
}

std::string	WrongAnimal::getType(void) const{
	return (this->_type);
}
