/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:26:21 by hitran            #+#    #+#             */
/*   Updated: 2025/04/29 11:01:11 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <list>
# include <vector>
# include <sstream>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);		
		~PmergeMe();

		void start();
		void parse(int ac, char** av);
		std::list<int> sortList();
		std::vector<int> sortVector();

	private:
		std::list<int> 		_inputList;
		std::vector<int> 	_inputVector;

};