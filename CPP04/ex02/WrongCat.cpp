/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:16:40 by hitran            #+#    #+#             */
/*   Updated: 2025/02/19 11:11:45 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "WrongCat: Default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal() {
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	this->_type = other._type;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "WrongCat: Meowwwwwwww" << std::endl;
}