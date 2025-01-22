/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 22:38:11 by hitran            #+#    #+#             */
/*   Updated: 2025/01/22 14:16:52 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed( const int number );
		Fixed( const float number );
		Fixed( const Fixed &source );
		~Fixed();
		
		Fixed &operator=(const Fixed &other);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt ( void ) const;

		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		Fixed operator+(const Fixed &other);
		Fixed operator-(const Fixed &other);
		Fixed operator*(const Fixed &other);
		Fixed operator/(const Fixed &other);
		
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		
		static Fixed &min(Fixed &num1, Fixed &num2);
		static const Fixed &min(const Fixed &num1, const Fixed &num2);
		static Fixed &max(Fixed &num1, Fixed &num2);
		static const Fixed &max(const Fixed &num1, const Fixed &num2);
		
	private:
		int _value;
		static const int _fBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &source);
