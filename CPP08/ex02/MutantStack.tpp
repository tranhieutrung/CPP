/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/16 14:04:02 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

template<typename T> 
MutantStack<T>::MutantStack(): std::stack<T>() {}

template<typename T> 
MutantStack<T>::MutantStack(const MutantStack &other): std::stack<T>(other) {}

template<typename T> 
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other) {
	if (this != &other) {
		this->operator=(other);
	}
	return *this;
}

template<typename T> 
MutantStack<T>::~MutantStack() {}
