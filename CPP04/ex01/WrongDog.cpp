/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:16:51 by hitran            #+#    #+#             */
/*   Updated: 2025/02/17 14:39:57 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal() {
	std::cout << "WrongDog: Default constructor called" << std::endl;
	this->_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &other): WrongAnimal() {
	std::cout << "WrongDog: Copy constructor called" << std::endl;
	this->_type = other._type;
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog: Destructor called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &other) {
	std::cout << "WrongDog: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}
