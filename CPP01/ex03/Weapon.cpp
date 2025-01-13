/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:40:23 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 14:10:15 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type): _type(type) {
}

Weapon::~Weapon() {
}

const std::string &Weapon::getType() const {
	return (this->_type);
}

void Weapon::setType(const std::string type) {
	this->_type = type;
}