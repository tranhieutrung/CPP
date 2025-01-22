/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:43:41 by hitran            #+#    #+#             */
/*   Updated: 2025/01/22 14:21:13 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Fixed.hpp"
# include <climits>

class Point
{
	public:
		Point();
		Point( const float number1, const float number2 );
		Point( const Point &source );
		~Point();
		
		Point &operator=(const Point &other);
		float xFloat( void ) const ;
		float yFloat( void ) const ;
			
	private:
		const Fixed _x;
		const Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);