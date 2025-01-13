/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:55:20 by hitran            #+#    #+#             */
/*   Updated: 2025/01/11 15:09:25 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie1 = Zombie();
	zombie1.announce();

	Zombie *zombie2 = newZombie("Trung1");
	delete (zombie2);

	Zombie *zombie3 = new Zombie("Trung2");
	zombie3->announce();
	delete (zombie3);

	randomChump("Trung3");

	return (0);
}
