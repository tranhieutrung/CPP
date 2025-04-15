/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/15 14:50:54 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main() {
	srand(time(0));
	unsigned int maxSize = 100000;
	Span list(maxSize);

	try {
		for (unsigned int index = 0; index < maxSize + 2; index++) {
			list.addNumber(rand() % RAND_MAX);
			if (index == maxSize - 1) {
				std::cout << "✅ Completed adding numbers" << std::endl;
				std::cout << "Try to keep adding:" << std::endl;
			}
		}
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
