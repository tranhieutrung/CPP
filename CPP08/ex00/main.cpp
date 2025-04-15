/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/15 13:24:08 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main( void ) {
	std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8};
	try {
		std::vector<int>::iterator it = ::easyfind(array, 7);
		std::cout << *it << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}
