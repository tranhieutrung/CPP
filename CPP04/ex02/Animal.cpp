/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:14:58 by hitran            #+#    #+#             */
/*   Updated: 2025/02/10 15:11:03 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = other;
}

Animal::~Animal() {
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << "Quack quack quack" << std::endl;
}

std::string	Animal::get_type(void) const{
	return (this->_type);
}
