/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:26:21 by hitran            #+#    #+#             */
/*   Updated: 2025/05/07 12:24:22 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <deque>
# include <vector>
# include <list>
# include <sstream>
# include <limits>
#include <chrono>

#define MAXINT 4294967295

class PmergeMe
{
	public:
		PmergeMe() = delete;
		PmergeMe(const PmergeMe &other) = delete;
		PmergeMe &operator=(const PmergeMe &other) = delete;		
		~PmergeMe();

		static void mergeInsertionSort(int ac, char** av);

	private:

};