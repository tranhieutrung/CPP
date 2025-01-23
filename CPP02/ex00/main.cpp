/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:38 by hitran            #+#    #+#             */
/*   Updated: 2025/01/23 12:05:08 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed b(a);
	Fixed c;
	Fixed d;

	c = b;
	b.setRawBits(15);
	d = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << d.getRawBits() << std::endl;
	return 0;
}
