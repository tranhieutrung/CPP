/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:24 by hitran            #+#    #+#             */
/*   Updated: 2025/02/17 14:51:50 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal(), _brain(new Brain()) {
	std::cout << "Cat: Default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &other): AAnimal(), _brain(new Brain(*other._brain)) {
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->_type = other._type;
}

Cat::~Cat() {
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		delete this->_brain;
		if (other._brain != nullptr) {
			this->_brain = new Brain(*other._brain);
		} else {
			this->_brain = nullptr;
		}
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meowwwwwwww" << std::endl;
}
