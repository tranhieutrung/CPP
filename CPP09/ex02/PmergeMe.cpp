/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:26:12 by hitran            #+#    #+#             */
/*   Updated: 2025/04/29 11:06:21 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <chrono>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) {
	(void)other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
	(void)other;
	return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::start() {
	// Sorting list
	auto start = std::chrono::high_resolution_clock::now();
	
	std::list<int>sortedList = this->sortList();

	auto end = std::chrono::high_resolution_clock::now();
	auto listSortingTime = end - start;

	// Sorting vector
	start = std::chrono::high_resolution_clock::now();
	
	std::vector<int>sortedVector = this->sortVector();

	end = std::chrono::high_resolution_clock::now();
	auto vectorSortingTime = end - start;
}

void PmergeMe::parse(int ac, char** av) {
	size_t idx = 0;
	for (int index = 1; index < ac; index++) {
		std::string numStr = av[index];
		int num = std::stoi(numStr, &idx);
		if (num <= 0 || idx != numStr.size()) {
			throw (std::runtime_error(""));
		}
		this->_inputList.emplace_back(num);
		this->_inputVector.emplace_back(num);
	}
}

std::list<int> PmergeMe::sortList() {
	std::list<int> sorted;

	return (sorted);
}

std::vector<int> PmergeMe::sortVector() {
	std::vector<int> sorted;

	return (sorted);
}
