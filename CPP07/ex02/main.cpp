/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/25 10:34:51 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

template <typename T>
void printValue(Array<T> &a1, Array<T> &a2, Array<T> &a3, unsigned int len) {
	std::cout << "array 1(" << a1.size() << ")\tarray 2(";
	std::cout << a2.size() << ")\tarray 3(" << a3.size()<< ")" << std::endl;
	for (unsigned int i = 0; i < len; i++) {
		try {
			std::cout << a1[i] << "\t\t" << a2[i] << "\t\t" <<a3[i] << std::endl;
		} catch (const std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
}

int main( void ) {
	std::cout << "Test1: array of ints" << std::endl;
	Array<int> a1;
	Array<int> a2(5);
	for (int i = 0; i < 5; i++) {
		a2[i] = i + 1;
	}
	Array<int> a3(a2);
	a1 = a2;
	
	try {
		std::cout << "Try to modify a3[2] = -1: ";
		a3[2] = -1;
		std::cout << "OK" << std::endl;
		
		std::cout << "Try to modify a1[3] = 10: ";
		a1[3] = 10;
		std::cout << "OK" << std::endl;
		
		std::cout << "Try to modify a1[6] = a2[0]: ";
		a1[6] = a2[0];
		std::cout << "OK" << std::endl;
		
	} catch (const std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << "Print values:" << std::endl;
	printValue(a1, a2, a3, 6);

	std::cout << std::endl << "Test2: array of strings" << std::endl;
	Array<std::string> b1;
	Array<std::string> b2(5);
	for (int i = 0; i < 5; i++) {
		b2[i] = "string";
	}
	Array<std::string> b3(b2);
	b1 = b2;

	try {
		std::cout << "Try to modify b3[2] = \"New string\": ";
		b3[2] = "New string";
		std::cout << "OK" << std::endl;
		std::cout << "Try to modify b2[6] = \"Out of range\": ";
		b2[6] = "Out of range";
		std::cout << "OK" << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "Print values:" << std::endl;
	printValue(b1, b2, b3, 6);

	return 0;
}
