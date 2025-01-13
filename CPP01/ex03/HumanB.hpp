/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:40:28 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 14:29:52 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(const std::string &name);
		~HumanB();
		
		void setWeapon(const Weapon &weapon);
		void attack();

	private:
		const Weapon *_weapon;
		std::string _name;
};
