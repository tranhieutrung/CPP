/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:01:44 by hitran            #+#    #+#             */
/*   Updated: 2025/03/06 15:09:53 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
						AForm("ShrubberyForm", 145, 137),
						_target("ShrubberyTarget") {
	std::cout << "ShrubberyCreationForm: Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):
						AForm("ShrubberyForm", 145, 137),
						_target(target) {
	std::cout << "ShrubberyCreationForm: Constructor (with target) called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): 
						AForm("ShrubberyForm", 145, 137),
						_target(other.getTarget()) {
	std::cout << "ShrubberyCreationForm: Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm: Destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	std::cout << "ShrubberyCreationForm: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_target = other.getTarget();
	}
	return (*this);
}

const std::string	ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::cout << "ShrubberyCreationForm: execute called" << std::endl;
	if (!this->getSignedStatus()) {
		throw (FormNotSignedException());
	} else if (executor.getGrade() > this->getGradeToExecute()) {
		throw (GradeTooLowException());
	} else {
		std::ofstream	outFile;
		
		outFile.open(this->_target + "_shrubbery");
		if (outFile.fail()) {
			throw std::runtime_error("ShrubberyCreationForm: Failed to open file for writing!");
		} else {
			outFile << "      ccee88oo" << std::endl 
					<< "   C8O8O8Q8PoOb o8oo" << std::endl 
					<< " dOB69QO8PdUOpugoO9bD" << std::endl 
					<< "CgggbU8OU qOp qOdoUOdcb" << std::endl 
					<< "   6OuU  //p u gcoUodpP" << std::endl 
					<< "      \\\\//  //douUP" << std::endl 
					<< "       \\\\ //" << std::endl 
					<< "        |||" << std::endl 
					<< "        |||" << std::endl ;
			outFile.close();
			std::cout << this->_target << "_shrubbery is created" << std::endl; 
		}
	}
}

const char *ShrubberyCreationForm::FormNotSignedException::what() const throw() {
    return ("ShrubberyCreationForm: The Form is not signed");
}
