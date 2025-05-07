/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/05/07 12:25:08 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
	if (ac < 2) {
		std::cerr << "Error" << std::endl;
		return (EXIT_FAILURE);
	}

	try {
		PmergeMe::mergeInsertionSort(ac, av);
	} catch (std::exception &) {
		std::cerr << "Error" << std::endl;
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
