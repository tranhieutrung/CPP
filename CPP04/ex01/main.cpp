/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:16:02 by hitran            #+#    #+#             */
/*   Updated: 2025/02/10 15:09:37 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	int n = 6;

	std::cout << "Animal construtor:" << std::endl;
	Animal *animal[n];

	std::cout << "The first Animal: " << std::endl;
	animal[0] = new Dog();
	for (int i = 1; i < n/2; i++) {
		std::cout << "Animal No." << i + 1 << ":" << std::endl;
		animal[i] = new Dog(*dynamic_cast<Dog*>(animal[i - 1]));
	}
	for (int i = n/2; i < n; i++) {
		std::cout << "Animal No." << i + 1<< ":" << std::endl;
		animal[i] = new Cat();
	}

	std::cout << std::endl << "Let's make sounds:" << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << "Animal No." << i + 1 << ":" << std::endl;
		animal[i]->makeSound();
	}


	std::cout << std::endl << "Destructor:"  << std::endl;
	for (int i = 0; i < n; i++)
	 {
		std::cout << "Animal No." << i + 1 << ":" << std::endl;
		delete animal[i];
	}

	return 0;
}