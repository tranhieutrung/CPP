/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:41:50 by hitran            #+#    #+#             */
/*   Updated: 2025/01/14 12:51:40 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl () {
}

Harl::~Harl() {
}

void Harl::complain( std::string level ) {

}

void Harl::debug( void ) {
	std::cout << DEBUG << std::endl;
}
void Harl::info( void ) {
	std::cout << INFO << std::endl;
}

void Harl::warning( void ) {
	std::cout << WARNING << std::endl;
}

void Harl::error( void ) {
	std::cout << ERROR << std::endl;
}
