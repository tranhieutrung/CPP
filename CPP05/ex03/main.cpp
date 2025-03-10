/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:17 by hitran            #+#    #+#             */
/*   Updated: 2025/03/10 12:33:09 by hitran           ###   ########.fr       */
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
	AForm* form[3];

	std::cout << std::endl << GREEN << "MakeForm:" << RESET << std::endl;
	form[0]= someRandomIntern.makeForm("robotomy request", "Bender");
	form[1]= someRandomIntern.makeForm("shrUbbery creAtion", "Cluster1");
	form[2]= someRandomIntern.makeForm("robotommy request", "Bender");
	form[2]= someRandomIntern.makeForm("presidential pardon", "Home");

	std::cout << std::endl << GREEN << "Execute Form:" << RESET << std::endl;
	std::cout << YELLOW << "Execute Form[0]:" << RESET << std::endl;
	senior.signForm(*form[0]);
	senior.executeForm(*form[0]);	
	std::cout << std::endl << YELLOW << "Execute Form[1]:" << RESET << std::endl;
	senior.signForm(*form[1]);
	senior.executeForm(*form[1]);
	std::cout << std::endl << YELLOW << "Execute Form[2]:" << RESET << std::endl;
	senior.signForm(*form[2]);
	senior.executeForm(*form[2]);

	std::cout << std::endl << RED << "Deconstructors:" << RESET << std::endl;
	delete form[0];
	delete form[1];
	delete form[2];
	return (0);
}