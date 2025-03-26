/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:36 by hitran            #+#    #+#             */
/*   Updated: 2025/03/26 14:32:37 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter: Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	std::cout << "ScalarConverter: Copy constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter: Destructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
	std::cout << "ScalarConverter: Copy assignment operator called" << std::endl;
	return (*this);
}
