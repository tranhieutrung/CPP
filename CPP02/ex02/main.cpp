/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:38 by hitran            #+#    #+#             */
/*   Updated: 2025/01/21 14:31:06 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed c;
c = Fixed(b.toFloat() * 0.124f);
Fixed const d(Fixed(c.toFloat() / 0.1f));

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;

std::cout << b << std::endl;

std::cout << c << std::endl;
std::cout << d << std::endl;

std::cout << Fixed::max( a, b ) << std::endl;
std::cout << Fixed::min( a, c ) << std::endl;

std::cout << (a > b)  << std::endl;

return 0;
}
