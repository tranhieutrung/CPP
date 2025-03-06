/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:01:44 by hitran            #+#    #+#             */
/*   Updated: 2025/03/06 13:48:48 by hitran           ###   ########.fr       */
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
	if (!this->getSignedStatus()) {
		throw (FormNotSignedException());
	} else if (executor.getGrade() > this->getGradeToExecute()) {
		throw (ExecuteGradeTooLowException());
	} else {
		std::ofstream	outFile;
		
		outFile.open(this->_target + "_shrubbery");
		if (outFile.fail()) {
			throw std::runtime_error("Failed to open file for writing!");
		} else {
			outFile << "      A" << std::endl 
					<< "     / \\" << std::endl 
					<< "   B     C" << std::endl 
					<< "  / \\  / \\" << std::endl 
					<< " C   D E   F" << std::endl;
			outFile.close();
			std::cout << this->_target << "_shrubbery is created" << std::endl; 
		}
	}
}

const char *ShrubberyCreationForm::FormNotSignedException::what() const throw() {
    return ("ShrubberyCreationForm: The Form is not signed");
}

const char *ShrubberyCreationForm::ExecuteGradeTooLowException::what() const throw() {
    return ("ShrubberyCreationForm: The execute grade is not high enough");
}
