/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:14:58 by hitran            #+#    #+#             */
/*   Updated: 2025/02/10 15:11:03 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource() {
	std::cout << "IMateriaSource: Default constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &other) {
	std::cout << "IMateriaSource: Copy constructor called" << std::endl;
	*this = other;
}

IMateriaSource::~IMateriaSource() {
	std::cout << "IMateriaSource: Destructor called" << std::endl;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &other) {
	std::cout << "IMateriaSource: Copy assignment operator called" << std::endl;
	if (this != &other) {
		
	}
	return (*this);
}

IMateriaSource::~IMateriaSource() {}
void IMateriaSource::learnMateria(AMateria*) {

}

AMateria* IMateriaSource::createMateria(std::string const & type) {
	
}
