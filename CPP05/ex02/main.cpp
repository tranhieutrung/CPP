/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:17 by hitran            #+#    #+#             */
/*   Updated: 2025/03/06 15:08:06 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

int main()
{
	std::cout << GREEN << "Constructors:" << RESET << std::endl;
	Bureaucrat					trung("Trung", 137);
	AForm						*form1;
	
	form1 = new ShrubberyCreationForm("home");
	
	std::cout << std::endl << BLUE << "Test: unable execution (not signed form): " << RESET << std::endl;
	trung.executeForm(*form1);

	std::cout << std::endl << BLUE << "Test: sign then execute form1: " << RESET << std::endl;
	try {
		trung.signForm(*form1);
		form1->execute(trung);
	} catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}

	std::cout << std::endl << BLUE << "Test: decrease grade then execute form1: " << RESET << std::endl;
	try {
		trung.gradeDecrement();
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	trung.executeForm(*form1);

	std::cout << std::endl << BLUE << "Test: increase grade then execute form1: " << RESET << std::endl;
	try {
		trung.gradeIncrement();
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	trung.executeForm(*form1);
	
	std::cout << std::endl << RED << "Deconstructors:" << RESET << std::endl;
	delete form1;
	return (0);
}