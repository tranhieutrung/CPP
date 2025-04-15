/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:26:39 by hitran            #+#    #+#             */
/*   Updated: 2025/04/15 10:08:29 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stdexcept>

template <typename T>
class Array
{
	public:
		Array();
		Array(const unsigned int n);
		Array(const Array<T> &other);
		Array<T> &operator=(const Array<T> &other);
		~Array();
		
		T &operator[](const unsigned int index);
		unsigned int size();
		
	private:
		T*				_array;
		unsigned int	_size;
	
};

# include "Array.tpp"