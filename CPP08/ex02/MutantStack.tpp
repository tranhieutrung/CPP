/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/16 13:40:34 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> MutantStack<T>::MutantStack() {}

template <typename T> MutantStack<T>::MutantStack(const MutantStack &other) {}

template <typename T> MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other) {
	if (this != &other) {
	}
	return *this;
}

template <typename T> MutantStack<T>::~MutantStack() {}
