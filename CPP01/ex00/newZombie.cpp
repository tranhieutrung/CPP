/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:57:54 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 12:50:53 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	try {
		Zombie *zombie = new Zombie(name);
		return (zombie);
	} catch (const std::bad_alloc &error) {
		std::cerr << "Memory allocation failed: " << error.what() << std::endl;
		return (nullptr);
	}
}
