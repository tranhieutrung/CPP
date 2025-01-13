/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:13:18 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 14:20:35 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon): _name(name), _weapon(weapon) {
}

HumanA::~HumanA() {
}

void HumanA::attack() {
	std::cout << this->_name << "  attacks with their " << this->_weapon.getType() << std::endl;
}
