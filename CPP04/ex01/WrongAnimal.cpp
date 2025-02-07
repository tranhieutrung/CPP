/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:16:17 by hitran            #+#    #+#             */
/*   Updated: 2025/02/07 12:47:42 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &source) {
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = source;
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
	std::cout << "wrong animal: ba ba ba banana" << std::endl;
}

std::string	WrongAnimal::get_type(void) const{
	return (this->_type);
}
