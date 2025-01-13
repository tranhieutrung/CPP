/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:55:59 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 10:54:40 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(const std::string &name);
		~Zombie();

		void announce(void);
	private:
		std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
