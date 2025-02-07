/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:44 by hitran            #+#    #+#             */
/*   Updated: 2025/02/07 12:15:46 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &source): Animal() {
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->type = source.type;
}

Dog::~Dog() {
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woof woofffff" << std::endl;
}
