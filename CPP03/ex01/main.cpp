/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:38 by hitran            #+#    #+#             */
/*   Updated: 2025/02/06 11:16:39 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	// Case 1:
	std::cout << "Case 1:" <<std::endl;
	ScavTrap a;
	ScavTrap b("B");
	
	for (int i = 0; i < 6; i++)
	{
		std::cout << "Loop No." << i + 1 <<std::endl;
		b.attack("A");
		a.takeDamage(20);
	}
	// Case 2:
	ScavTrap b1(b);
	
	for (int i = 0; i < 6; i++)
	{
		std::cout << "Loop No." << i + 1 <<std::endl;
		b1.attack("A");
		b1.takeDamage(20);
	}
	
	//Case 3:
	std::cout << "Case 3:" <<std::endl;
	ScavTrap c("C");
	ScavTrap d("D");
	ScavTrap e(c);
	ScavTrap f = d;
	
	for (int i = 0; i < 10; i++) {
		std::cout << "Loop No." << i + 1 <<std::endl;
		e.attack("D");
		f.takeDamage(20);
		f.beRepaired(10);
		f.guardGate();
	}

	return 0;
}
