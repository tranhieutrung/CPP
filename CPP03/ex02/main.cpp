/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:38 by hitran            #+#    #+#             */
/*   Updated: 2025/02/05 14:45:18 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	// Case 1:
	std::cout << "Case 1:" <<std::endl;
	FragTrap a;
	FragTrap b("B");
	
	for (int i = 0; i < 15; i++)
	{
		std::cout << "Loop No." << i + 1 <<std::endl;
		a.attack("B");
	}

	// Case 2:
	std::cout << "Case 2:" <<std::endl;
	FragTrap c("C");
	FragTrap d("D");
	FragTrap e(c);
	FragTrap f = d;
	
	for (int i = 0; i < 5; i++) {
		std::cout << "Loop No." << i + 1 <<std::endl;
		e.highFivesGuys();
		f.highFivesGuys();
	}
	return 0;
}
