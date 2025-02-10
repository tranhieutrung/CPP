/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:16:02 by hitran            #+#    #+#             */
/*   Updated: 2025/02/10 10:58:29 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	// Test 1:
	int n = 12;

	std::cout << "Animal construtor:" << " " << std::endl;
	const Animal *animal[n];

	animal[0] = new Dog();
	for (int i = 1; i < n/2; i++) {
		std::cout << "Loop No." << i + 1 << ":" << std::endl;
		animal[i] = animal[i -1];
	}
	animal[n/2] = new Cat();
	for (int i = n/2 + 1; i < n; i++) {
		std::cout << "Loop No." << i + 1 << ":" << std::endl;
		animal[i] = animal[i -1];
	}

	std::cout << std::endl << "Let's make sounds:" << " " << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << "Animal No." << i + 1 << ":" << std::endl;
		animal[i]->makeSound();
	}


	std::cout << std::endl << "Destructor:" << " " << std::endl;
	for (int i = 0; i < n; i++)
	 {
		std::cout << "Animal No." << i + 1 << ":" << std::endl;
		delete animal[i];
	}

	// Test 2:

	return 0;
}