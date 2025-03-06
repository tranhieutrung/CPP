/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:17 by hitran            #+#    #+#             */
/*   Updated: 2025/03/06 10:39:12 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "Constructors: " << std::endl;
	Bureaucrat	bur1;
	Bureaucrat	bur2("Bureaucrat2", 1);
	Form		form1;
	Form		form2("Form2", false, 50, 50);

	std::cout << std::endl << "Bureaucrat information: "<< std::endl;
	std::cout << bur1 << std::endl;
	std::cout << bur2 << std::endl;

	std::cout << std::endl << "Form1 information: "<< std::endl;
	std::cout << form1 << std::endl;

	std::cout << std::endl;
	bur1.signForm(form1);
	std::cout << form1 << std::endl;
	bur2.signForm(form1);
	std::cout << form1 << std::endl;

	std::cout << std::endl << "Form2 information: "<< std::endl;
	std::cout << form2 << std::endl;
	std::cout << std::endl;
	bur1.signForm(form2);
	std::cout << form2 << std::endl;
	bur2.signForm(form2);
	std::cout << form2 << std::endl;

	return (0);
}