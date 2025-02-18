/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:43:07 by hitran            #+#    #+#             */
/*   Updated: 2025/02/17 15:27:10 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	std::cout << "========== TEST 1: Basic Learning and Creating ==========\n";
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());

	std::cout << std::endl;
	ICharacter* me = new Character("me");

	AMateria* tmp;
	std::cout << std::endl;
	tmp = src->createMateria("ice");
	std::cout << std::endl;
	me->equip(tmp);

	std::cout << std::endl;
	tmp = src->createMateria("cure");
	std::cout << std::endl;
	me->equip(tmp);

	std::cout << std::endl;
	ICharacter* bob = new Character("bob");
	
	std::cout << std::endl;
	me->use(0, *bob);
	std::cout << std::endl;
	me->use(1, *bob);

	std::cout << "\n========== TEST 2: Learn More Than 4 Materia ==========\n";
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	AMateria *learnTmp = new Ice();
	src->learnMateria(learnTmp); // Should not be learned (more than 4)
	delete learnTmp;
	
	std::cout << "\n========== TEST 3: Create Non-Existing Materia ==========\n";
	AMateria* unknown = src->createMateria("fire");
	if (!unknown)
		std::cout << "Materia 'fire' does not exist in the source\n";

	std::cout << "\n========== TEST 4: Equip More Than 4 Materia ==========\n";
	std::cout << std::endl << "The 3rd equipment" <<std::endl;
	me->equip(src->createMateria("ice"));
	std::cout << std::endl << "The 4th equipment" <<std::endl;
	me->equip(src->createMateria("cure"));

	std::cout << std::endl << "Save the Inventory before calling equip" <<std::endl;
	AMateria* extra = src->createMateria("ice"); // Fifth materia
	std::cout << std::endl << "The 5th equipment" <<std::endl;
	me->equip(extra); // Should not be equipped, delete extra in equip

	std::cout << "\n========== TEST 5: Unequip and Delete ==========\n";
	
	Character *character = dynamic_cast<Character*>(me);
	if (character) {
		AMateria *savedMateria = character->getInventory(1);
		if (savedMateria) {
			me->unequip(1);
			delete savedMateria;
		} else {
			std::cout << "Error: Inventory slot is empty!" << std::endl;
		}
	}

	std::cout << "\n========== TEST 6: Use All Equipped Materia ==========\n";
	me->use(0, *bob);
	me->use(1, *bob); //unequipped in test 5 -> Should not work
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob); // Should not work

	std::cout << "\n==== TEST 7: Character's copy assignment operator =====\n";
	Character* original = new Character("Original");
	original->equip(new Ice()); // Equip some materia
	original->equip(new Cure());

	Character* copy = new Character("Copy");
	copy->equip(new Cure()); // Equip some materia
	copy->equip(new Ice());
	*copy = *original; // Copy the original character to the new character

	// Check if the copy has the same inventory as the original
	std::cout << "\nOriginal Character Inventory:\n";
	for (int i = 0; i < 2; ++i) {
		if (original->getInventory(i)) {
			std::cout << original->getInventory(i)->getType() << std::endl;
		}
	}

	std::cout << "\nCopied Character Inventory:\n";
	for (int i = 0; i < 2; ++i) {
		if (copy->getInventory(i)) {
			std::cout << copy->getInventory(i)->getType() << std::endl;
		}
	}

	std::cout << "\n========== Cleaning Up Memory ==========\n";
	std::cout << "\nClean Bob (Character)\n";
	delete bob;
	std::cout << "\nClean me (Character)\n";
	delete me;
	std::cout << "\nClean src (MateriaSource)\n";
	delete src;
	std::cout << "\nClean original (Character)\n";
	delete original;
	std::cout << "\nClean copy (Character)\n";
	delete copy;
	
	std::cout << "\n========== THANK YOU SO MUCH ==========\n";

	return 0;
}
