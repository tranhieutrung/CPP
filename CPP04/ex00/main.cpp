/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:16:02 by hitran            #+#    #+#             */
/*   Updated: 2025/02/19 11:16:52 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	std::cout << "Animal construtor:" << " " << std::endl;
	const Animal* meta = new Animal();

	std::cout << std::endl << "Dog construtor:" << " " << std::endl;
	const Animal* dog = new Dog();

	std::cout << std::endl << "Cat construtor:" << " " << std::endl;
	const Animal* cat = new Cat();

	std::cout << std::endl << "Wrong construtor:" << " " << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();

	std::cout << std::endl << "Wrong Cat construtor:" << " " << std::endl;
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << std::endl << "Wrong Cat construtor:" << " " << std::endl;
	WrongCat wCat;
	
	std::cout << std::endl << "Who are you?:" << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << wCat.getType() << " " << std::endl;

	std::cout << std::endl << "Let's make sounds:" << " " << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	wrongMeta->makeSound();
	wrongCat->makeSound();
	wCat.makeSound();

	std::cout << std::endl << "Destructor:" << " " << std::endl;
	delete meta;
	delete dog;
	delete cat;
	delete wrongMeta;
	delete wrongCat;
	
	return 0;
}