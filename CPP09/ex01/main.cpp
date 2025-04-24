/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/24 12:53:01 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error" << std::endl;
		return (EXIT_FAILURE);
	}

	try {
		RPN rpn;
		rpn.start(av[1]);
	} catch (std::exception &) {
		std::cerr << "Error" << std::endl;
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
