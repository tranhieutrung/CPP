/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:24 by hitran            #+#    #+#             */
/*   Updated: 2025/02/07 14:39:07 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(), _brian(new Brain()) {
	std::cout << "Cat: Default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &source): Animal(), _brian(new Brain(*source._brian)) {
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->_type = source._type;
}

Cat::~Cat() {
	std::cout << "Cat: Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		delete this->_brian;
		this->_brian = new Brain(*other._brian);
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meowwwwwwww" << std::endl;
}
