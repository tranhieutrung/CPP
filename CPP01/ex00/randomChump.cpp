/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:58:05 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 13:02:30 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name) {
	try {
		Zombie *zombie = new Zombie(name);
	
		zombie->announce();
		delete (zombie);
	} catch (const std::bad_alloc &error) {
		std::cerr << "Memory allocation failed: " << error.what() << std::endl;
		exit (1);
	}
}
