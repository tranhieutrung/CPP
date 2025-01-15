/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 22:38:11 by hitran            #+#    #+#             */
/*   Updated: 2025/01/15 11:00:12 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &source);
		~Fixed();
		
		Fixed &operator = (const Fixed &other);
		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
};


