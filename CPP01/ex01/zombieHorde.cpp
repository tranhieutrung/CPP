/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:52:51 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 13:17:12 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	try {
		Zombie *zombies = new Zombie[N];

		for (int i = 0; i < N; i++) {
			zombies[i].setName(name);
		}

		return (zombies);
	} catch (const std::bad_alloc &error) {
		std::cerr << "Memory allocation failed: " << error.what() << std::endl;
		return (nullptr);
	}
}
