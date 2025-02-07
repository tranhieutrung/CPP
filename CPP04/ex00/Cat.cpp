/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:24 by hitran            #+#    #+#             */
/*   Updated: 2025/02/07 12:15:25 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat: Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &source): Animal() {
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->type = source.type;
}

Cat::~Cat() {
	std::cout << "Cat: Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meowwwwwwww" << std::endl;
}
