/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:58:46 by hitran            #+#    #+#             */
/*   Updated: 2025/03/07 11:50:57 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
						AForm("ShrubberyCreationForm", 145, 137),
						_target("ShrubberyCreation") {
	std::cout << "ShrubberyCreationForm: Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):
						AForm("ShrubberyCreationForm", 145, 137),
						_target(target) {
	std::cout << "ShrubberyCreationForm: Constructor (with target) called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): 
						AForm("ShrubberyCreationForm", 145, 137),
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
	std::cout << "ShrubberyCreationForm: Execute called" << std::endl;
	checkRequirements(executor);
	std::ofstream	outFile;
	
	outFile.open(this->_target + "_shrubbery");
	if (outFile.fail()) {
		throw std::runtime_error("ShrubberyCreationForm: Failed to open file for writing!");
	} else {
		outFile << executor.getName() << " created:" << std::endl << std::endl
				<< "      ccee88oo" << std::endl 
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
