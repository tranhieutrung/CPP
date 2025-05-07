/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:26:21 by hitran            #+#    #+#             */
/*   Updated: 2025/05/07 13:36:04 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <deque>
# include <vector>
# include <list>
# include <chrono>

#define MAXINT 4294967295

class PmergeMe
{
	public:
		PmergeMe() = delete;
		PmergeMe(const PmergeMe &other) = delete;
		PmergeMe &operator=(const PmergeMe &other) = delete;		
		~PmergeMe();

		static void run(int ac, char** av);

	private:

};

//Utils

template <typename Container>
void printSequence(std::string ms, const Container &sequence);

void printTime(std::string container, size_t size, auto time);

std::list<unsigned int> parse(int ac, char** av);
