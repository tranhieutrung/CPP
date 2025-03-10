/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:17 by hitran            #+#    #+#             */
/*   Updated: 2025/03/10 12:06:53 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

int main()
{
	std::cout << GREEN << "Constructors:" << RESET << std::endl;
	Bureaucrat	senior("senior", 45);
	Intern someRandomIntern;
	AForm* rrf;

	std::cout << std::endl << GREEN << "MakeForm:" << RESET << std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	std::cout << std::endl << GREEN << "MakeForm:" << RESET << std::endl;
	rrf->beSigned(senior);
	senior.executeForm(*rrf);

	std::cout << std::endl << RED << "Deconstructors:" << RESET << std::endl;
	delete rrf;
	return (0);
}