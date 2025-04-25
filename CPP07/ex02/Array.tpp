/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:26:39 by hitran            #+#    #+#             */
/*   Updated: 2025/04/25 10:25:47 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Array.hpp"

template <typename T>
Array<T>::Array(): _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(const unsigned int n): _array(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array<T>& other): _array(new T[other._size]), _size(other._size) {
	for (unsigned int index = 0; index < _size; index++) {
		_array[index] = other._array[index];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T>& other) {
	if (this != &other) {
		delete[] this->_array;
		this->_size = other._size;
		this->_array = new T[this->_size];
		for (unsigned int index = 0; index < this->_size; index++) {
			_array[index] = other._array[index];
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] this->_array;
}

template <typename T>
T &Array<T>::operator[](const unsigned int n) {
	if (this->_size <= n) {
		throw std::runtime_error("Out of bounds");
	}
	return this->_array[n];
}

template <typename T>
unsigned int Array<T>::size() {
	return this->_size;
}
