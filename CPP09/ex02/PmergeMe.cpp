/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:26:12 by hitran            #+#    #+#             */
/*   Updated: 2025/04/25 15:31:44 by hitran           ###   ########.fr       */
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
	
	std::list<unsigned int>sortedList = this->sortList();

	auto end = std::chrono::high_resolution_clock::now();
	auto listSortingTime = end - start;

	// Sorting vector
	start = std::chrono::high_resolution_clock::now();
	
	std::vector<unsigned int>sortedVector = this->sortVector();

	end = std::chrono::high_resolution_clock::now();
	auto vectorSortingTime = end - start;
}

void PmergeMe::parse(char** av) {
	(void)av;
}

std::list<unsigned int> PmergeMe::sortList() {
	std::list<unsigned int> sorted;

	return (sorted);
}

std::vector<unsigned int> PmergeMe::sortVector() {
	std::vector<unsigned int> sorted;

	return (sorted);
}
