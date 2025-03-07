/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:01:44 by hitran            #+#    #+#             */
/*   Updated: 2025/03/07 11:56:46 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
						AForm("ShrubberyForm", 72, 45),
						_target("ShrubberyTarget") {
	std::cout << "RobotomyRequestForm: Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):
						AForm("ShrubberyForm", 72, 45),
						_target(target) {
	std::cout << "RobotomyRequestForm: Constructor (with target) called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): 
						AForm("ShrubberyForm", 72, 45),
						_target(other.getTarget()) {
	std::cout << "RobotomyRequestForm: Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm: Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	std::cout << "RobotomyRequestForm: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_target = other.getTarget();
	}
	return (*this);
}

const std::string	RobotomyRequestForm::getTarget() const {
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	std::cout << "RobotomyRequestForm: Execute called" << std::endl;
	if (!this->getSignedStatus()) {
		std::cerr << "The robotomy failed because "; 
		throw (FormNotSignedException());
		std::cerr << std::endl;
	} else if (executor.getGrade() > this->getGradeToExecute()) {
		std::cerr << "The robotomy failed because "; 
		throw (GradeNotHighEnoughException());
		std::cerr << std::endl;
	} else {
		std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl; 
	}
}
