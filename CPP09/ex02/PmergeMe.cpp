/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:26:12 by hitran            #+#    #+#             */
/*   Updated: 2025/05/07 13:36:16 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
void merge(const Container &input, Container &a, Container &b) {
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
void insert(Container &a, Container &b) {
	for (auto it = b.begin(); it != b.end(); it++) {
		auto pos = std::lower_bound(a.begin(), a.end(), *it);
		a.insert(pos, *it);
	}
}

template <typename Container>
void sort(Container &input) {
	if (input.size() < 2) {
		return ;
	} else if (input.size() == 2) {
		std::sort(input.begin(), input.end());
	} else {
		Container a, b;
		merge(input, a, b);
		sort(a);
		insert(a, b);
		input = a;
	}
}

void PmergeMe::run(int ac, char** av) {
	std::list<unsigned int> input = parse(ac, av);

	// Sorting deque
	auto start = std::chrono::high_resolution_clock::now();
	std::deque<unsigned int> deque;
	deque.insert(deque.end(), input.begin(), input.end());
	sort(deque);
	auto end = std::chrono::high_resolution_clock::now();
	auto dequesortingTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	// Sorting vector
	start = std::chrono::high_resolution_clock::now();
	std::vector<unsigned int> vector;
	vector.insert(vector.end(), input.begin(), input.end());
	sort(vector);
	end = std::chrono::high_resolution_clock::now();
	auto vectorsortingTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	if (!std::is_sorted(deque.begin(), deque.end())
		|| !std::is_sorted(vector.begin(), vector.end())) {
		std::cerr << "Error: Not sorted!\n";
	}
	printSequence("Before ", input);
	printSequence("After ", deque);
	printTime("deque", deque.size(), dequesortingTime.count());
	printTime("vector", vector.size(), vectorsortingTime.count());
}

PmergeMe::~PmergeMe() {}

// Utils:

template <typename Container>
void printSequence(std::string ms, const Container &sequence) {
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

std::list<unsigned int> parse(int ac, char** av) {
	std::list<unsigned int> res;
	for (int index = 1; index < ac; index++) {
		std::string numStr = av[index];
		size_t idx = 0;
		long int num = std::stol(numStr, &idx);
		if (num <= 0 || num > MAXINT || idx != numStr.size()) {
			throw (std::runtime_error(""));
		}
		res.push_back(num);
	}
	return res;
}
