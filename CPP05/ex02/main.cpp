/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:17 by hitran            #+#    #+#             */
/*   Updated: 2025/03/07 12:45:36 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

int main()
{
	std::cout << GREEN << "Constructors:" << RESET << std::endl;
	Bureaucrat					fresher("fresher", 150);
	Bureaucrat					junior("junior", 137);
	Bureaucrat					senior("senior", 45);
	Bureaucrat					boss("boss", 5);
	
	AForm						*forms[3];
	forms[0] = new ShrubberyCreationForm("cluster1");
	forms[1] = new RobotomyRequestForm("cluster2");
	forms[2] = new PresidentialPardonForm("home");
	
	std::cout << std::endl << YELLOW << "Test1: form not signed " << RESET << std::endl;
	fresher.executeForm(*forms[0]);
	junior.executeForm(*forms[0]);
	senior.executeForm(*forms[0]);
	boss.executeForm(*forms[0]);

	std::cout << std::endl << YELLOW << "Test2: excecuteForm(ShrubberyCreationForm): " << RESET << std::endl;

	std::cout << std::endl << BLUE << "Fresher tries to sign ShrubberyCreationForm: " << RESET << std::endl;
	fresher.signForm(*forms[0]);
	
	std::cout << std::endl << BLUE << "Junior tries to sign ShrubberyCreationForm: " << RESET << std::endl;
	junior.signForm(*forms[0]);

	std::cout << std::endl << BLUE << "Senior tries to sign ShrubberyCreationForm: " << RESET << std::endl;
	senior.signForm(*forms[0]);

	std::cout << std::endl << BLUE << "Boss tries to sign ShrubberyCreationForm: " << RESET << std::endl;
	boss.signForm(*forms[0]);
	
	std::cout << std::endl << BLUE << "4 Bureaucrat try to execute ShrubberyCreationForm: " << RESET << std::endl;
	fresher.executeForm(*forms[0]);
	junior.executeForm(*forms[0]);
	senior.executeForm(*forms[0]);
	boss.executeForm(*forms[0]);


	std::cout << std::endl << YELLOW << "Test2: excecuteForm(ShrubberyCreationForm): " << RESET << std::endl;

	std::cout << std::endl << BLUE << "Fresher tries to sign ShrubberyCreationForm: " << RESET << std::endl;
	fresher.signForm(*forms[0]);
	
	std::cout << std::endl << BLUE << "Junior tries to sign ShrubberyCreationForm: " << RESET << std::endl;
	junior.signForm(*forms[0]);

	std::cout << std::endl << BLUE << "Senior tries to sign ShrubberyCreationForm: " << RESET << std::endl;
	senior.signForm(*forms[0]);

	std::cout << std::endl << BLUE << "Boss tries to sign ShrubberyCreationForm: " << RESET << std::endl;
	boss.signForm(*forms[0]);
	
	std::cout << std::endl << BLUE << "4 Bureaucrat try to execute ShrubberyCreationForm: " << RESET << std::endl;
	fresher.executeForm(*forms[0]);
	junior.executeForm(*forms[0]);
	senior.executeForm(*forms[0]);
	boss.executeForm(*forms[0]);

	std::cout << std::endl << YELLOW << "Test3: excecuteForm(RobotomyRequestForm): " << RESET << std::endl;

	std::cout << std::endl << BLUE << "Fresher tries to sign RobotomyRequestForm: " << RESET << std::endl;
	fresher.signForm(*forms[1]);
	
	std::cout << std::endl << BLUE << "Junior tries to sign RobotomyRequestForm: " << RESET << std::endl;
	junior.signForm(*forms[1]);

	std::cout << std::endl << BLUE << "Senior tries to sign RobotomyRequestForm: " << RESET << std::endl;
	senior.signForm(*forms[1]);

	std::cout << std::endl << BLUE << "Boss tries to sign RobotomyRequestForm: " << RESET << std::endl;
	boss.signForm(*forms[1]);
	
	std::cout << std::endl << BLUE << "4 Bureaucrat try to execute RobotomyRequestForm: " << RESET << std::endl;
	fresher.executeForm(*forms[1]);
	junior.executeForm(*forms[1]);
	senior.executeForm(*forms[1]);
	boss.executeForm(*forms[1]);


	std::cout << std::endl << YELLOW << "Test4: excecuteForm(RobotomyRequestForm): " << RESET << std::endl;

	std::cout << std::endl << BLUE << "Fresher tries to sign RobotomyRequestForm: " << RESET << std::endl;
	fresher.signForm(*forms[2]);
	
	std::cout << std::endl << BLUE << "Junior tries to sign RobotomyRequestForm: " << RESET << std::endl;
	junior.signForm(*forms[2]);

	std::cout << std::endl << BLUE << "Senior tries to sign RobotomyRequestForm: " << RESET << std::endl;
	senior.signForm(*forms[2]);

	std::cout << std::endl << BLUE << "Boss tries to sign RobotomyRequestForm: " << RESET << std::endl;
	boss.signForm(*forms[2]);
	
	std::cout << std::endl << BLUE << "4 Bureaucrat try to execute RobotomyRequestForm: " << RESET << std::endl;
	fresher.executeForm(*forms[2]);
	junior.executeForm(*forms[2]);
	senior.executeForm(*forms[2]);
	boss.executeForm(*forms[2]);

	std::cout << std::endl << RED << "Deconstructors:" << RESET << std::endl;
	delete forms[0];
	delete forms[1];
	delete forms[2];
	return (0);
}