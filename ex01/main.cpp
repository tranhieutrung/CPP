/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:54:40 by hitran            #+#    #+#             */
/*   Updated: 2025/01/08 15:00:59 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void)
{
	std::string	command;
	PhoneBook	phonebook;

	while (!std::cin.eof())
	{
		std::cout << "Please enter a command (SEARCH/ ADD/ EXIT)" << std::endl;
		std::getline(std::cin, command);
		if (command == "SEARCH")
			search_pb(&phonebook)
	}
}
