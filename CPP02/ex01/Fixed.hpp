/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 22:38:11 by hitran            #+#    #+#             */
/*   Updated: 2025/01/14 23:23:43 by hitran           ###   ########.fr       */
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
		Fixed( const Fixed &fixed );
		~Fixed();
		Fixed &operator = (const Fixed &fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt ( void ) const;
	private:
		int _value;
		static const int _fBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
