/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:55:20 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 12:58:44 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {
	Zombie zombie1 = Zombie();
	zombie1.announce();

	Zombie *zombie2 = newZombie("Trung");
	if (zombie2 == nullptr)
		return (1);
	zombie2->announce();
	delete (zombie2);

	randomChump("Trung_random");

	return (0);
}
