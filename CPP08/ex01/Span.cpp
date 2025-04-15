/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/15 14:52:14 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span() {}

Span::Span(unsigned int N): _maxSize(N), _numList() {}

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
		throw std::runtime_error("exceed limit");
	}
	this->_numList.push_back(num);
}

unsigned int Span::shortestSpan() {
	int res = 0;
	return (res);
}

unsigned int Span::longestSpan() {
	int res = 0;
	return (res);
}
