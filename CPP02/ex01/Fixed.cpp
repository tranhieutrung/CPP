/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 22:38:00 by hitran            #+#    #+#             */
/*   Updated: 2025/01/15 13:22:32 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed( const int intNum ) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = intNum << this->_fractionalBits;
}

/**
 * Floating-point numbers (float) are stored differently from integers.
 * IEEE 754 format splits the number into three components:
	- Sign bit (1 bit): Indicates whether the number is positive or negative.
	- Exponent (8 bits): Represents the "scale" of the number.
	- Mantissa (23 bits): Represents the significant digits of the number.
	Value=(−1) = Sign ×(1.Mantissa)×2 Exponent−127
 * Example: Representing 5.75 in IEEE 754 (Single Precision)
	+ 5.75 in decimal = 101.11 in binary.
	+ 101.11 = 1.0111 (Normalized number): shift bits to this form 1.xxxxxx -> shift 2 bits: actual exponent = 2
	+ Exponent (biased) = Actual Exponent + 127 = 129 in decimal = 10000001 in binary.
	+ Mantissa: drop "1." from the normalized number (1.0111) -> Mantissa = 01110000000000000000000 (23 bits)
	+ Combine the Components:
		Sign = 0 (positive)
		Exponent = 10000001
		Mantissa = 01110000000000000000000
		The final representation in binary is: 0 10000001 01110000000000000000000
 */
Fixed::Fixed( const float floatNum ) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(floatNum * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		std::cout << "Copy assignment operator called" << std::endl;
		this->_fixedPointValue = other.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits( void ) const {
	return (this->_fixedPointValue);
}

void Fixed::setRawBits( int const raw ) {
	this->_fixedPointValue = raw;
}

float Fixed::toFloat( void ) const {
	return ((float)this->_fixedPointValue / (1 << this->_fractionalBits));
}

int Fixed::toInt ( void ) const {
	return (this->_fixedPointValue >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}