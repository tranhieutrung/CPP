/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:55:59 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 11:50:53 by hitran           ###   ########.fr       */
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
		void setName(const std::string &name);
	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );
