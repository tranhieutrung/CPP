/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:38 by hitran            #+#    #+#             */
/*   Updated: 2025/01/27 13:29:10 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	// Case 1:
	std::cout << "Case 1:" <<std::endl;
	ClapTrap a;
	ClapTrap b("B");
	
	for (int i = 0; i < 15; i++)
	{
		std::cout << "Loop No." << i + 1 <<std::endl;
		a.attack("B");
		b.takeDamage(0);
		b.beRepaired(1);
	}
	b.takeDamage(15);
	b.beRepaired(10);

	// Case 2:
	std::cout << "Case 2:" <<std::endl;
	ClapTrap c("C");
	ClapTrap d("D");
	
	for (int i = 0; i < 25; i++) {
		std::cout << "Loop No." << i + 1 <<std::endl;
		c.attack("D");
		d.takeDamage(1);
		d.beRepaired(1);
	}


	return 0;
}
