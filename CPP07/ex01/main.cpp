/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/14 14:10:17 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
	int num[] = {1, 2, 3, 4, 5};
	std::string str[] = {"Hello", "42", "World", "!"};

	std::cout << "Test with integer array:" << std::endl;
	iter(num, 5, print<int>);

	std::cout << std::endl << "Test with string array:" << std::endl;
	iter(str, 4, print<std::string>);

	return 0;
}
