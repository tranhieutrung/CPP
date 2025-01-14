/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 22:38:11 by hitran            #+#    #+#             */
/*   Updated: 2025/01/14 23:03:17 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// Fixed-point number: fixed<fixed-point number value, fractional bits>:
// fixed-point number value: total bits
// fractional bits: total bits for the fractional part
class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed &operator = (const Fixed &fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int _value;
		static const int _fBits = 8;
};


