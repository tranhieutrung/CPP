/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:26:12 by hitran            #+#    #+#             */
/*   Updated: 2025/05/07 12:24:35 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <chrono>

template <typename Container>
void printSequence(std::string ms, Container sequence) {
	std::cout 	<< ms;
	int iter = 0;
	for (auto it = sequence.begin(); it != sequence.end(); ++it) {
		iter++;
		if (iter <= 4 || sequence.size() == 5) {
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
				<< " elements with std::" << container << " : "
				<< time << " us" << std::endl;
}

template <typename Container>
void parse(int ac, char** av, Container &res) {
	for (int index = 1; index < ac; index++) {
		std::string numStr = av[index];
		res.push_back(std::stol(numStr));
	}
}

void validateInput(int ac, char** av) {
	std::list<unsigned int> list;
	for (int index = 1; index < ac; index++) {
		std::string numStr = av[index];
		size_t idx = 0;
		long int num = std::stol(numStr, &idx);
		if (num <= 0 || num > MAXINT || idx != numStr.size()) {
			throw (std::runtime_error(""));
		}
		list.push_back(num);
	}
	printSequence("Before ", list);
}


template <typename Container>
void splitContainer(const Container &input, Container &a, Container &b) {

	for (auto it = input.begin(); it != input.end(); ) {
		auto next = std::next(it);
		if (next == input.end()) {
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
}

template <typename Container>
Container sort(Container &input) {

	if (input.size() <= 1) {
		return (input);
	} else if (input.size() == 2) {
		auto first = input.begin();
		auto second = std::next(first);
		if (*first > *second) {
			std::iter_swap(first, second);
		}
		return (input);
	}

	Container a, b;
	splitContainer(input, a, b);
	
	if (a.size() > 1) {
		a = sort(a);
	}

	for (auto itB = b.begin(); itB != b.end(); itB++) {
		auto pos = std::lower_bound(a.begin(), a.end(), *itB);
		a.insert(pos, *itB);
	}

	return (a);
}

void PmergeMe::mergeInsertionSort(int ac, char** av) {
	validateInput(ac, av);

	// Sorting deque
	auto start = std::chrono::high_resolution_clock::now();
	std::deque<unsigned int> deque;
	parse(ac,av, deque);
	deque = sort(deque);
	auto end = std::chrono::high_resolution_clock::now();
	auto dequeSortingTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	// Sorting vector
	start = std::chrono::high_resolution_clock::now();
	std::vector<unsigned int> vector;
	parse(ac,av, vector);
	vector = sort(vector);
	end = std::chrono::high_resolution_clock::now();
	auto vectorSortingTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	if (!std::is_sorted(deque.begin(), deque.end())
		|| !std::is_sorted(vector.begin(), vector.end())) {
		std::cerr << "Error: Not sorted!\n";
	}

	printSequence("After ", deque);
	printTime("deque", deque.size(), dequeSortingTime.count());
	printTime("vector", vector.size(), vectorSortingTime.count());
}

PmergeMe::~PmergeMe() {}