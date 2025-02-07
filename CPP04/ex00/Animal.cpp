/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:14:58 by hitran            #+#    #+#             */
/*   Updated: 2025/02/07 12:18:45 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &source) {
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = source;
}

Animal::~Animal() {
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

void	Animal::makeSound(void) const {
	if (this->type == "Dog") {
		std::cout << "Woof woof" << std::endl;
	} else	if (this->type == "Cat") {
		std::cout << "Meowwwwwwww" << std::endl;
	} else {
		std::cout << "Quack quack quack" << std::endl;
	}
}

std::string	Animal::getType(void) const{
	return (this->type);
}
