/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:41:59 by hitran            #+#    #+#             */
/*   Updated: 2025/01/14 13:21:33 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {
	Harl harl;
	
	std::cout << "Level: 'DEBUG'" << std::endl;
	harl.complain("DEBUG");
	std::cout << "Level: 'INFO'" << std::endl;
	harl.complain("INFO");
	std::cout << "Level: 'WARNING'" << std::endl;
	harl.complain("WARNING");
	std::cout << "Level: 'ERROR'" << std::endl;
	harl.complain("ERROR");
	std::cout << "Level: 'debug'" << std::endl;
	harl.complain("debug");
	std::cout << "Level: 'info'" << std::endl;
	harl.complain("info");
	std::cout << "Level: 'warning'" << std::endl;
	harl.complain("warning");
	std::cout << "Level: 'error'" << std::endl;
	harl.complain("error");
	std::cout << "Level: 'invalid'" << std::endl;
	harl.complain("invalid");
	std::cout << "Level: ''" << std::endl;
	harl.complain("");
	std::cout << "Level: ' '" << std::endl;
	harl.complain(" ");
	std::cout << "Level: '	'" << std::endl;
	harl.complain("	");
	std::cout << "Level: '1'" << std::endl;
	harl.complain("1");

	return (EXIT_SUCCESS);
}
