/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:45:52 by hitran            #+#    #+#             */
/*   Updated: 2025/04/17 10:24:40 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <algorithm>
# include <stdexcept>
# include <vector>
# include <limits>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);		
		~Span();

		void addNumber(int num);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void fillSpan(std::vector<int>::iterator otherBegin, 
					std::vector<int>::iterator otherEnd);

	private:
		int					_maxSize;
		std::vector<int>	_numList;

};