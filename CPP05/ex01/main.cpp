/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:17 by hitran            #+#    #+#             */
/*   Updated: 2025/03/11 09:48:46 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

int main()
{
	std::cout << GREEN << "Bureaucrat's Constructors:" << RESET << std::endl;
	Bureaucrat	bur1;
	Bureaucrat	bur2("Bureaucrat2", 1);

	std::cout << std::endl << GREEN << "Bureaucrats's information: " << RESET << std::endl;
	std::cout << bur1 << std::endl;
	std::cout << bur2 << std::endl;

	std::cout << std::endl << BLUE << "Test Form's GradeTooLowException: " << RESET << std::endl;
	try {
		Form form("Form", 151, 50);
	} catch (const std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}

	std::cout << std::endl << BLUE << "Test Form's GradeTooHighException: " << RESET << std::endl;
	try {
		Form form("Form", 50, 0);
	} catch (const std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}

	std::cout << std::endl << GREEN << "Form's Constructors: " << RESET << std::endl;
	Form		form1;
	Form		form2("Form2", 50, 50);

	std::cout << std::endl << BLUE << "Form1: Test signForm and beSigned: " << RESET << std::endl;
	std::cout << GREEN << "Form1's information: " << RESET  << std::endl;
	std::cout << form1 << std::endl;
	std::cout << YELLOW << "bur1 tries to sign form1: " << RESET << std::endl;
	bur1.signForm(form1);
	std::cout << YELLOW << "Form1's information after being signed by bur1: " << RESET << std::endl;
	std::cout << form1 << std::endl;
	std::cout << YELLOW << "bur2 tries to sign form1: " << RESET << std::endl;
	bur2.signForm(form1);
	std::cout  << YELLOW << "Form1's information after being signed by bur2: " << RESET << std::endl;
	std::cout << form1 << std::endl;

	std::cout << std::endl << BLUE << "Form2: Test signForm and beSigned: " << RESET << std::endl;
	std::cout << GREEN << "Form2's information: " << RESET << std::endl;
	std::cout << form2 << std::endl;
	std::cout << YELLOW << "bur1 tries to sign form2: " << RESET << std::endl;
	bur1.signForm(form2);
	std::cout  << YELLOW << "Form2's information after being signed by bur1: " << RESET << std::endl;
	std::cout << form2 << std::endl;
	std::cout << YELLOW << "bur2 tries to sign form2: " << RESET << std::endl;
	bur2.signForm(form2);
	std::cout  << YELLOW << "Form2's information after being signed by bur2: " << RESET << std::endl;
	std::cout << form2 << std::endl;

	std::cout << std::endl << BLUE << "Form3: Test beSigned only: " << RESET << std::endl;
	std::cout << GREEN << "Form3's Constructors: " << RESET << std::endl;
	Form		form3("Form3", 50, 50);
	std::cout << GREEN << "Form3's information: " << RESET  << std::endl;
	std::cout << form3 << std::endl;	std::cout << YELLOW << "bur1 tries to sign form3: " << RESET << std::endl;
	try {
		form3.beSigned(bur1);
		std::cout << GREEN << "Form3 was signed." << RESET << std::endl;
		std::cout  << YELLOW << "Form3's information after being signed by bur1: " << RESET << std::endl;
		std::cout << form3 << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}
	std::cout << YELLOW << "bur2 tries to sign form3: " << RESET << std::endl;
	try {
		form3.beSigned(bur2);
		std::cout << GREEN << "Form3 was signed." << RESET << std::endl;
		std::cout  << YELLOW << "Form3's information after being signed by bur2: " << RESET << std::endl;
		std::cout << form3 << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}	
	std::cout << std::endl << RED << "Deconstructors:" << RESET << std::endl;
	return (0);
}