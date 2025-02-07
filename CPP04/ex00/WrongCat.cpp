/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:16:40 by hitran            #+#    #+#             */
/*   Updated: 2025/02/07 12:16:40 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "WrongCat: Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &source): WrongAnimal() {
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	this->type = source.type;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "WrongCat: Ba ba ba banana" << std::endl;
}