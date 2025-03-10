/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:01:44 by hitran            #+#    #+#             */
/*   Updated: 2025/03/07 12:16:00 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
						AForm("PresidentialPardonForm", 25, 5),
						_target("PresidentialPardon") {
	std::cout << "PresidentialPardonForm: Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target):
						AForm("PresidentialPardonForm", 25, 5),
						_target(target) {
	std::cout << "PresidentialPardonForm: Constructor (with target) called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): 
						AForm("PresidentialPardonForm", 25, 5),
						_target(other.getTarget()) {
	std::cout << "PresidentialPardonForm: Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm: Destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	std::cout << "PresidentialPardonForm: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_target = other.getTarget();
	}
	return (*this);
}

const std::string	PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	std::cout << "PresidentialPardonForm: Execute called" << std::endl;
	checkRequirements(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl; 
}
