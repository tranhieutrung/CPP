/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:55:20 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 13:17:42 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {
	Zombie *zombies = zombieHorde(10, "Trung");

	if (zombies == nullptr) {
		return (1);
	}
	for (int i = 0; i < 10; i++) {
		zombies[i].announce();
	}
	delete [] zombies;

	return (0);
}
