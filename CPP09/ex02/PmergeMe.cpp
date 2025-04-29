/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:26:12 by hitran            #+#    #+#             */
/*   Updated: 2025/04/29 14:02:05 by hitran           ###   ########.fr       */
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

void printSequence(std::string ms, std::list<int> list) {
	std::cout 	<< ms;
	int iter = 0;
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it) {
		iter++;
		if (iter <= 4 || list.size() == 5) {
			std::cout << " " << *it;
		} else {
			std::cout << " [...]";
			break;
		}
	}
	std::cout << std::endl;
}

void printTime(std::string container, size_t size, auto time) {
	std::cout 	<< "Time to process a range of " << size
				<< " elements with std::" << container << " : " << time << " us" << std::endl;
}

void PmergeMe::start() {
	// Sorting list
	auto start = std::chrono::high_resolution_clock::now();
	
	std::list<int>sortedList = this->sortList();

	auto end = std::chrono::high_resolution_clock::now();
	auto listSortingTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	// Sorting vector
	start = std::chrono::high_resolution_clock::now();
	
	std::vector<int>sortedVector = this->sortVector();

	end = std::chrono::high_resolution_clock::now();
	auto vectorSortingTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	printSequence("Before ", this->_inputList);
	// printSequence("After ", sortedList);
	printTime("list", this->_inputList.size(), listSortingTime.count());
	printTime("vector", this->_inputVector.size(), vectorSortingTime.count());
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

#include <thread>

std::list<int> PmergeMe::sortList() {
	std::list<int> sorted;
	return (sorted);
}

std::vector<int> PmergeMe::sortVector() {
	std::vector<int> sorted;
	return (sorted);
}
