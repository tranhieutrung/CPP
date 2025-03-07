/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 22:38:00 by hitran            #+#    #+#             */
/*   Updated: 2025/01/23 10:24:28 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNum) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = intNum << _fBits;
}

/**
 * Floating-point numbers (float) are stored differently from integers.
 * IEEE 754 format splits the number into three components:
	- Sign bit (1 bit): Indicates whether the number is positive or negative.
	- Exponent (8 bits): Represents the "scale" of the number.
	- Mantissa (23 bits): Represents the significant digits of the number.
	Value=(−1)^Sign × (1.Mantissa) × 2^(Exponent−127)
 * Example: Representing 5.75 in IEEE 754 (Single Precision)
	+ 5.75 in decimal = 101.11 in binary.
	+ Normalized number: 101.11 -> 1.0111 * 2^2 (shift the decimal point to this form 1.xxxxxx) -> Actual Exponent = 2 
	+ Exponent (biased) = Actual Exponent + 127 = 129 in decimal = 10000001 in binary.
	+ Mantissa: drop "1." from the normalized number (1.0111) -> Mantissa = 01110000000000000000000 (23 bits)
	+ Combine the Components:
		Sign = 0 (positive)
		Exponent = 10000001
		Mantissa = 01110000000000000000000
		The final representation in binary is: 0 10000001 01110000000000000000000
 * So that, to convert a float number to fixed-point value, we can not shift the bits like integers. 
 * when floatNum * 1 << 8 means: floatNum * 2^8 -> floatNum *256
 * In that case, the only thing change is Exponent. Now it changes from 2 + 127 -> 2 + 127 +8 = 137.
 * the fixed point number now:
 * 0 10001001 01110000000000000000000
 */
Fixed::Fixed(const float floatNum) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(floatNum * (1 << this->_fBits));
}

Fixed::Fixed(const Fixed &source) {
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		std::cout << "Copy assignment operatorcalled" << std::endl;
		this->_value = other.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void) const {
	return (this->_value);
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float Fixed::toFloat(void) const {
	return ((float)this->_value / (1 << this->_fBits));
}

int Fixed::toInt (void) const {
	return (this->_value >> this->_fBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &source) {
	out << source.toFloat();
	return (out);
}
