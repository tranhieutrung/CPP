/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/22 13:02:02 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	if (ac == 1) {
		std::cerr << "Error: could not open file." << std::endl;
		return (EXIT_FAILURE);
	} else if (ac != 2) {
		std::cerr << "Error: invalid number of arguments." << std::endl;
		return (EXIT_FAILURE);
	}

	try {
		BitcoinExchange btc;
		btc.loadPriceMap("data.csv");
		btc.processInput(av[1]);
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
