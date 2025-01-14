/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:41:50 by hitran            #+#    #+#             */
/*   Updated: 2025/01/14 14:05:54 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl () {
}

Harl::~Harl() {
}

void Harl::complain( std::string level ) {
	void (Harl::*complaints[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int index = -1;
	for (int i = 0; i < 4; i++) {
		index = (level == levels[i]) ? i : index;
	}
	switch (index)
	{
	case -1:
		std::cout << INVALID << std::endl;
		break;
	
	default:
		(this->*complaints[index])();
		break;
	}
	
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
