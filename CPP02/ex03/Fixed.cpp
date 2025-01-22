/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 22:38:00 by hitran            #+#    #+#             */
/*   Updated: 2025/01/22 11:09:53 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0) {
}

Fixed::Fixed( const int intNum ) {
	if (intNum > (INT_MAX >> _fBits)) {
		std::cerr << "Warning: Integer overflow detected." << std::endl;
		this->_value = INT_MAX;
	}
	else if (intNum < (INT_MIN >> _fBits)) {
		std::cerr << "Warning: Integer underflow detected." << std::endl;
		this->_value = INT_MIN;
	}
	else {
		this->_value = intNum << _fBits;
	}
}

Fixed::Fixed( const float floatNum ) {
	const int maxInt = std::numeric_limits<int>::max();
	const int minInt = std::numeric_limits<int>::min();
	const float maxAllowedValue = static_cast<float>(maxInt) / (1 << this->_fBits);
	const float minAllowedValue = static_cast<float>(minInt) / (1 << this->_fBits);

	if (std::isnan(floatNum)) { //NaN (Not a Number)
		std::cerr << "Warning: Input is NaN, setting value to 0." << std::endl;
		this->_value = 0;
	} else if (std::isinf(floatNum)) { //Infinity
		if (floatNum > 0) {
			this->_value = maxInt;
		} else {
			this->_value = minInt;
		}
	} else if (floatNum > maxAllowedValue) {
		std::cerr << "Warning: Overflow detected." << std::endl;
		this->_value = maxInt;
	} else if (floatNum < minAllowedValue) {
		std::cerr << "Warning: Underflow detected." << std::endl;
		this->_value = minInt;
	} else {
		this->_value = roundf(floatNum * (1 << this->_fBits));
	}
}

Fixed::Fixed(const Fixed &source) {
	*this = source;
}

Fixed::~Fixed() {
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		this->_value = other.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits( void ) const {
	return (this->_value);
}

void Fixed::setRawBits( int const raw ) {
	this->_value = raw;
}

float Fixed::toFloat( void ) const {
	return ((float)this->_value / (1 << this->_fBits));
}

int Fixed::toInt ( void ) const {
	return (this->_value >> this->_fBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &source) {
	out << source.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &other) const {
	return (this->_value > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const {
	return (this->_value < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const {
	return (this->_value >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const {
	return (this->_value <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const {
	return (this->_value == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const {
	return (this->_value != other.getRawBits());
}


Fixed Fixed::operator+(const Fixed &other) {
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) {
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) {
	return (Fixed(this->toFloat() / other.toFloat()));
}


Fixed &Fixed::operator++(void) {
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed &Fixed::operator--(void) {
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2) {
	return (num1 < num2 ? num1 : num2);
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2) {
	return (num1 < num2 ? num1 : num2);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2) {
	return (num1 > num2 ? num1 : num2);
}

const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2) {
	return (num1 > num2 ? num1 : num2);
}
