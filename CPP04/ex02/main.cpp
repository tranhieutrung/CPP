/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:16:02 by hitran            #+#    #+#             */
/*   Updated: 2025/02/12 12:08:30 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	std::cout << "AAnimal construtor:" << std::endl;
	AAnimal *AAnimal[3];

	std::cout << "AAnimal No.1: " << std::endl;
	AAnimal[0] = new Dog();
	std::cout << "AAnimal No.2: "  << std::endl;
	AAnimal[1] = new Cat();
	std::cout << "AAnimal No.3: " << std::endl;
	AAnimal[2] = new Dog(); //new AAnimal();
	

	std::cout << std::endl << "Let's make sounds:" << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << "AAnimal No." << i + 1 << ":" << std::endl;
		AAnimal[i]->makeSound();
	}


	std::cout << std::endl << "Destructor:"  << std::endl;
	for (int i = 0; i < 3; i++)
	 {
		std::cout << "AAnimal No." << i + 1 << ":" << std::endl;
		delete AAnimal[i];
	}

	return 0;
}