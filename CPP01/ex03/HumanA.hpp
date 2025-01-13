/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:40:31 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 14:09:30 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();
		
		void attack();

	private:
		Weapon &_weapon;
		std::string _name;
};
