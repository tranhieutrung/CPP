/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:26:21 by hitran            #+#    #+#             */
/*   Updated: 2025/05/07 09:51:58 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <list>
# include <vector>
# include <sstream>
# include <limits>

#define MAXINT 4294967295

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);		
		~PmergeMe();

		void start();
		void parse(int ac, char** av);

		template <typename Container>
		Container sort(Container &ctn);

	private:
		std::list<unsigned int> 	_inputList;
		std::vector<unsigned int> 	_inputVector;

};