/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:44 by hitran            #+#    #+#             */
/*   Updated: 2025/02/10 10:44:37 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(), _brian(new Brain()) {
	std::cout << "Dog: Default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &other): Animal(), _brian(new Brain(*other._brian)) {
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->_type = other._type;
}

Dog::~Dog() {
	std::cout << "Dog: Destructor called" << std::endl;
	delete this->_brian;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		delete this->_brian;
		this->_brian = new Brain(*other._brian);
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woof woofffff" << std::endl;
}
