/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:29 by hitran            #+#    #+#             */
/*   Updated: 2025/03/11 10:53:41 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
	std::cout << "Intern: Default constructor called" << std::endl;
}

Intern::Intern(const Intern &other) {
	std::cout << "Intern: Copy constructor called" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern: Destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &other) {
	std::cout << "Intern: Copy assignment operator called" << std::endl;
	return (*this);
}

/**
 * This function attempts to match the provided form name with predefined form types:
 * - "shrubbery creation"
 * - "robotomy request"
 * - "presidential pardon"
 * 
 * formCreator is an array of function pointer where its elements is a lamda function.
 * A lambda function is an anonymous function that can be defined inline.
 * Syntax: 
 *   [capture](parameters) -> returnType { function body }
 *
 * Components in this case:
 * - `[]`   : Capture list (empty here, meaning no external variables are captured).
 * - `(std::string target)`: Parameter list.
 * - `-> AForm*` : Return type (explicitly specified, though optional if inferred).
 * - `{ return new FormType(target); }` : Function body that dynamically allocates a form object.
 */
AForm *Intern::makeForm(std::string name, const std::string target) {
	const std::string formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};  

	AForm *(*formCreator[])(std::string) = {
		[](std::string target) -> AForm* { return new ShrubberyCreationForm(target); },
		[](std::string target) -> AForm* { return new RobotomyRequestForm(target); },
		[](std::string target) -> AForm* { return new PresidentialPardonForm(target); }		
	};

	for (char &c : name) {
		c = std::tolower(c);
	}

	for (int i = 0; i < 3; i++) {
		if (name == formNames[i]) {
			std::cout << "Intern creates " << name << std::endl;
			return (formCreator[i](target));
		}
	}

	std::cout << "Error: Form name '" << name << "' not recognized!" << std::endl;
	return nullptr;
}
