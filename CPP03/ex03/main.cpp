/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:38 by hitran            #+#    #+#             */
/*   Updated: 2025/02/06 11:54:58 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
	std::cout <<std::endl << "Constructor a():" <<std::endl;
	DiamondTrap a;
	std::cout <<std::endl << "Constructor b(\"B\"):" <<std::endl;
	DiamondTrap b("B");
	std::cout <<std::endl << "Constructor c(\"C\"):" <<std::endl;
	DiamondTrap c("C");
	std::cout <<std::endl << "Constructor d(b):" <<std::endl;
	DiamondTrap d(b);
	std::cout <<std::endl << "Constructor e():" <<std::endl;
	DiamondTrap e;
	std::cout <<std::endl << "Copy assginment operator: e = c:" <<std::endl;
	e = c;

	std::cout  <<std::endl << "Who are you?" <<std::endl;
	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
	d.whoAmI();
	e.whoAmI();

	std::cout <<std::endl << "A is attacking B:" <<std::endl;
	a.attack("B");
	b.takeDamage(10);
	b.beRepaired(5);
	b.guardGate();
	
	std::cout <<std::endl << "D (B) is attacking C:" <<std::endl;
	d.attack("C");
	c.takeDamage(10);
	c.beRepaired(5);

	std::cout <<std::endl << "D (B) is attacking b:" <<std::endl;
	d.takeDamage(90);
	for (int i = 0; i < 51; i++) {
		std::cout <<std::endl << "Loop No." << i + 1 <<std::endl;
		d.attack("B");
		b.takeDamage(20);
		b.beRepaired(5);
	}

	return 0;
}
