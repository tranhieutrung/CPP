/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:13:07 by hitran            #+#    #+#             */
/*   Updated: 2025/04/16 14:54:14 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &other);
		MutantStack &operator=(const MutantStack &other);		
		~MutantStack();

		using iterator = typename std::stack<T>::container_type::iterator;
		iterator begin();
		iterator end();

		using const_iterator = typename std::stack<T>::container_type::const_iterator;
		const_iterator cbegin() const;
		const_iterator cend() const;

		using reverse_iterator = typename std::stack<T>::container_type::reverse_iterator;
		reverse_iterator rbegin();
		reverse_iterator rend();

		using const_reverse_iterator = typename std::stack<T>::container_type::const_reverse_iterator;
		const_reverse_iterator crbegin() const;
		const_reverse_iterator crend() const;

	private:

};

# include "MutantStack.tpp"