/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:13:10 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 14:34:20 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name): _name(name) {
}

HumanB::~HumanB() {
}

void HumanB::setWeapon(const Weapon &weapon) {
	this->_weapon= &weapon;
}

void HumanB::attack() {
	if (this->_weapon) {
		std::cout << this->_name << "  attacks with their " << this->_weapon->getType() << std::endl;
	} else {
		std::cout << this->_name << "  attacks without weapons " << std::endl;
	}
}
