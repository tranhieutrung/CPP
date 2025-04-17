/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/17 10:45:14 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N): _maxSize(N) {
	_numList.reserve(N);
}

Span::Span(const Span &other): _maxSize(other._maxSize), _numList(other._numList) {}

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		this->_maxSize = other._maxSize;
		this->_numList = other._numList;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
	if (this->_numList.size() >= this->_maxSize) {
		throw std::runtime_error("Exceed limit");
	}
	this->_numList.push_back(num);
}

unsigned int Span::shortestSpan() {
	if (this->_numList.size() <= 1) {
		throw std::runtime_error("Need at least two numbers to compute distance.");
	}
	std::vector<int> sorted = this->_numList;
	std::sort(sorted.begin(), sorted.end());
	
	unsigned int res = std::numeric_limits<unsigned int>::max();
	for (size_t index = 1; index < sorted.size(); index++) {
		unsigned int diff = sorted[index] - sorted[index - 1];
		res = std::min(res, diff);
	}
	return (res);
}

unsigned int Span::longestSpan() {
	if (this->_numList.size() <= 1) {
		throw std::runtime_error("Need at least two numbers to compute distance.");
	}
	return (*std::max_element(this->_numList.begin(), this->_numList.end()) 
			- *std::min_element(this->_numList.begin(), this->_numList.end()));
}

void Span::fillSpan(std::vector<int>::iterator otherBegin, std::vector<int>::iterator otherEnd) {
	size_t otherSize = std::distance(otherBegin, otherEnd);
	if (this->_numList.size() + otherSize > this->_maxSize) {
		throw std::runtime_error("Exceed limit");
	}
	this->_numList.insert(this->_numList.end(), otherBegin, otherEnd);

	std::vector<int>::iterator it = _numList
}
