/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/16 14:50:56 by hitran           ###   ########.fr       */
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
		std::stack<T>::operator=(other);
	}
	return *this;
}

template<typename T> 
MutantStack<T>::~MutantStack() {}

/*
* 'c' is a protected member of std::stack<T>
* it represents the underlying container (default: std::deque<T>)
*/ 
template<typename T> 
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return (this->c.begin());
}

template<typename T> 
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return (this->c.end());
}

template<typename T> 
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const {
	return (this->c.begin());
}

template<typename T> 
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const {
	return (this->c.end());
}

template<typename T> 
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(){
	return (this->c.rbegin());
}

template<typename T> 
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
	return (this->c.rend());
}

template<typename T> 
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const {
	return (this->c.rbegin());
}

template<typename T> 
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const {
	return (this->c.rend());
}
