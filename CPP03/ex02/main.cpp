/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:38 by hitran            #+#    #+#             */
/*   Updated: 2025/02/06 11:31:36 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	// Case 1:
	std::cout << "Case 1:" <<std::endl;
	FragTrap a;
	FragTrap b("B");
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Loop No." << i + 1 <<std::endl;
		a.attack("B");
	}

	// Case 2:
	std::cout << "Case 2:" <<std::endl;
	FragTrap c("C");
	FragTrap d("D");

	c.highFivesGuys();
	d.highFivesGuys();
	d.takeDamage(50);
	
	std::cout << "Case 3:" <<std::endl;
	FragTrap e(c);
	FragTrap f = d;

	for (int i = 0; i < 5; i++) {
		std::cout << "Loop No." << i + 1 <<std::endl;
		e.attack("F");
		f.takeDamage(30);
		f.beRepaired(10);
	}
	return 0;
}
