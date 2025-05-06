/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:26:12 by hitran            #+#    #+#             */
/*   Updated: 2025/05/06 11:52:39 by hitran           ###   ########.fr       */
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
	
	std::list<int>sortedList = this->sort(this->_inputList);

	auto end = std::chrono::high_resolution_clock::now();
	auto listSortingTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	// Sorting vector
	start = std::chrono::high_resolution_clock::now();
	
	std::vector<int>sortedVector = this->sort(this->_inputVector);

	end = std::chrono::high_resolution_clock::now();
	auto vectorSortingTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	if (!std::is_sorted(sortedList.begin(), sortedList.end())
		|| !std::is_sorted(sortedVector.begin(), sortedVector.end())) {
		std::cerr << "Error: Not sorted!\n";
	}

	printSequence("Before ", this->_inputList);
	printSequence("After ", sortedList);
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
		this->_inputList.push_back(num);
		this->_inputVector.push_back(num);
	}
}

template <typename Container>
Container PmergeMe::sort(Container &ctn) {
	Container a, b;

	if (ctn.size() <= 1) {
		return (ctn);
	} else if (ctn.size() == 2) {
		auto first = ctn.begin();
		auto second = std::next(first);
		if (*first <= *second) {
			return (ctn);
		} else {
			a.push_back(*second);
			a.push_back(*first);
			return (a);
		}
	}

	for (auto it = ctn.begin(); it != ctn.end(); ) {
		auto next = std::next(it);
		if (next == ctn.end()) {
			b.push_back(*it);
			break;
		} else if (*it > *next) {
			a.push_back(*it);
			b.push_back(*next);
		} else {
			b.push_back(*it);
			a.push_back(*next);
		}
		std::advance(it, 2);
	}
	
	if (a.size() > 1) {
		a = this->sort(a);
	}

	for (auto itB = b.begin(); itB != b.end(); itB++) {
		auto pos = std::lower_bound(a.begin(), a.end(), *itB);
		a.insert(pos, *itB);
	}
	return (a);
}
