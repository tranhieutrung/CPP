/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:16:02 by hitran            #+#    #+#             */
/*   Updated: 2025/02/12 11:50:08 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	std::cout << "Animal construtor:" << std::endl;
	Animal *animal[3];

	std::cout << "Animal No.1: " << std::endl;
	animal[0] = new Dog();
	std::cout << "Animal No.2: "  << std::endl;
	animal[1] = new Cat();
	std::cout << "Animal No.3: " << std::endl;
	animal[2] = new Dog(); //new Animal();
	

	std::cout << std::endl << "Let's make sounds:" << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << "Animal No." << i + 1 << ":" << std::endl;
		animal[i]->makeSound();
	}


	std::cout << std::endl << "Destructor:"  << std::endl;
	for (int i = 0; i < 3; i++)
	 {
		std::cout << "Animal No." << i + 1 << ":" << std::endl;
		delete animal[i];
	}

	return 0;
}