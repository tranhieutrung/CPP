/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:54:40 by hitran            #+#    #+#             */
/*   Updated: 2025/01/09 13:15:41 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phoneBook;
	std::string	command;

	std::cout << "Welcome to the PhoneBook!" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT):" << std::endl;
		std::getline(std::cin, command);

		if (command == "ADD")
			phoneBook.addContacts();
		else if (command == "SEARCH")
			phoneBook.searchContacts();
		else if (command == "EXIT")
			break ;
		else if (!std::cin.eof())
			std::cout << "The program only accepts ADD, SEARCH or EXIT. ";
	}
	return 0;
}
