/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:17 by hitran            #+#    #+#             */
/*   Updated: 2025/03/05 13:41:00 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "Test 1: Construtors: " << std::endl;
	Bureaucrat a;
	std::cout << a << std::endl;
	std::cout << "getName: " << a.getName() << ", getGrade: " << a.getGrade() << std::endl;

	Bureaucrat a1("a1", 1);
	std::cout << a1 << std::endl;

	Bureaucrat a150("a150", 150);
	std::cout << a150 << std::endl;

	try {
		Bureaucrat a0("a0", 0);
		std::cout << a0 << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat a151("a151", 151);
		std::cout << a151 << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Test 2:Construtors: " << std::endl;
	try {
		Bureaucrat a3("a3", 3);
		std::cout << a3 << std::endl;

		Bureaucrat aNega("aNega", -1);
		std::cout << aNega << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Test 3: Copy Construtors: " << std::endl;
	try {
		Bureaucrat a1New(a1);
		std::cout << a1New << std::endl;

		a1New = a150;
		std::cout << a1New << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Test 4: Increment: " << std::endl;
	try {
		a.gradeIncrement();
		std::cout << a << std::endl;

		a1.gradeIncrement();
		std::cout << a1 << std::endl;

	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Test 5: Decrement: " << std::endl;
	try {
		a1.gradeDecrement();
		std::cout << a1 << std::endl;

		a150.gradeDecrement();
		std::cout << a150 << std::endl;

	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "After Imcrement/Decrement: " << std::endl;
	std::cout << a << std::endl;
	std::cout << a1 << std::endl;
	std::cout << a150 << std::endl;
	
	return 0;
}