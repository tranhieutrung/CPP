/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:41:59 by hitran            #+#    #+#             */
/*   Updated: 2025/01/14 13:52:42 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int ac, char **av ) {
	Harl harl;
	
	switch (ac)
	{
	case 2:
		harl.complain(av[1]);
		return (EXIT_SUCCESS);
	
	default:
		std::cout << "Invalid number of arguments!" << std::endl;
		return (EXIT_FAILURE);;
	}
}
