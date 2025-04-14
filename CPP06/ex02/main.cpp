/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/14 10:09:34 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes.hpp"

int main() {
	srand(time(0));
	
	for (int i = 0; i < 3; i++) {
		std::cout << "Loop no." << i + 1 << ": " << std::endl; 
		Base *type;

		type = generate();

		std::cout << "Identify by pointer:" << std::endl; 
		identify(type);
		std::cout << "Identify by reference:" << std::endl; 
		identify(*type);
		std::cout << std::endl; 
		delete type;
	}
	
	return (0);
}
