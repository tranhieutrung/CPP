/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:26:39 by hitran            #+#    #+#             */
/*   Updated: 2025/04/14 15:00:34 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Array.hpp"

template <class T>
Array<T>::Array(): _array(nullptr), _size(0) {}

template <class T>
Array<T>::Array(const unsigned int n): _array(new T[n]), _size(n) {}

template <class T>
Array<T>::Array(const Array<T>& other): _array(new T[other.size()]), _size(other.size()) {
	for (unsigned int index = 0; index < _size; index++) {
		_array[index] = other._array[index];
	}
}

template <class T>
Array<T> &Array<T>::operator=(const Array<T>& other) {
	if (this != other) {
		delete[] this->_array;
		this->_size = other.size();
		this->_array = new T[this->_size];
		for (unsigned int index = 0; index < this->_size; index++) {
			_array[index] = other._array[index];
		}
	}
	return *this;
}
	