/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/25 10:55:51 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

void computeSpan(Span &list) {
	try {
		std::cout << list.shortestSpan() << " is the shortest span" << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try {
		std::cout << list.longestSpan() << " is the longest span" << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

int main() {
	unsigned int maxSize = 100000;
	Span list(maxSize);

	std::cout << "Test 1: Try to compute shortest and longest span with no numbers:" << std::endl;
	computeSpan(list);

	try {
		for (unsigned int index = 0; index < maxSize - 2; index++) {
			list.addNumber(index);
			if (index == 0) {
				std::cout << std::endl << "Test 2: Try to compute shortest and longest span with 1 number:" << std::endl;
				std::cout << "Added 1 number" << std::endl;
				computeSpan(list);
			}
		}
		std::cout << std::endl << "✅ Completed adding numbers" << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << "Test3: Compute shortest and longest span after adding numbers" << std::endl;
	computeSpan(list);

	std::cout << std::endl << "Test4: Compute shortest and longest span after adding min and max integers" << std::endl;
	try {
		list.addNumber(std::numeric_limits<int>::min());
		list.addNumber(std::numeric_limits<int>::max());
		std::cout << "Added min and max integers" << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	computeSpan(list);

	std::cout << std::endl << "Test5: Exeed maximum limits:" << std::endl;
	std::cout << "Try to keep adding:" << std::endl;
	try {
		list.addNumber(0);
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "Test6: Subject's test" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl << "Test7: fillSpan" << std::endl;
	Span newSpan(10);
	std::vector<int> other = {0, 16841, 8, 5486, -61684};
	try {
		newSpan.addNumber(other.begin(),other.end());
		std::cout << "Filled 1 time" << std::endl;
		newSpan.addNumber(other.begin(),other.end());
		std::cout << "Filled 2 times" << std::endl;
		newSpan.addNumber(other.begin(),other.end());
		std::cout << "Filled 3 times" << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
