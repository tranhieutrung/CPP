/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:38 by hitran            #+#    #+#             */
/*   Updated: 2025/02/04 14:21:25 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	// Case 1:
	std::cout << "Case 1:" <<std::endl;
	ScavTrap a;
	ScavTrap b("B");
	
	for (int i = 0; i < 15; i++)
	{
		std::cout << "Loop No." << i + 1 <<std::endl;
		a.attack("B");
	}

	// Case 2:
	std::cout << "Case 2:" <<std::endl;
	ScavTrap c("C");
	ScavTrap d("D");
	ScavTrap e(c);
	ScavTrap f = d;
	
	for (int i = 0; i < 55; i++) {
		std::cout << "Loop No." << i + 1 <<std::endl;
		e.attack("D");
		f.takeDamage(20);
		f.beRepaired(20);
	}

	return 0;
}
