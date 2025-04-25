/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:26:21 by hitran            #+#    #+#             */
/*   Updated: 2025/04/25 15:29:59 by hitran           ###   ########.fr       */
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
		void parse(char** av);
		std::list<unsigned int> sortList();
		std::vector<unsigned int> sortVector();

	private:
		std::list<unsigned int> 	_inputList;
		std::vector<unsigned int> 	_inputVector;

};