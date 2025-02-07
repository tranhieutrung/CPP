/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:14:58 by hitran            #+#    #+#             */
/*   Updated: 2025/02/07 12:18:45 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain: Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = "Idea No. " + i + 1;
	}
}

Brain::Brain(const Brain &source) {
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = source;
}

Brain::~Brain() {
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = other._ideas[i];
		}
	}
	return (*this);
}
