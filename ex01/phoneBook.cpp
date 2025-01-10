/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:02:31 by hitran            #+#    #+#             */
/*   Updated: 2025/01/10 11:50:12 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : size(0) {
}

PhoneBook::~PhoneBook() {
}

int is_phone_number(const std::string &number) {
	if (number[0] == '+'){
		for (size_t i = 1; i < number.size(); ++i) {
			if (!isdigit(number[i]))
				return 0;
		}
	} else {
		for (size_t i = 0; i < number.size(); ++i) {
			if (!isdigit(number[i]))
				return 0;
		}
	}
	return 1;
}

int is_all_space(const std::string& str) {
	for (size_t i = 0; i < str.size(); ++i) {
		if (str[i] != ' ') {
			return 0;
		}
	}
	return 1;
}

std::string	getData(const std::string &message, int number) {
	std::string data;

	if (!std::cin.eof()) {
		std::cout << message << std::endl;
		std::getline(std::cin, data);
	}
	if (number == 1) {
		while (!std::cin.eof() && (data.empty() || !is_phone_number(data))) {
			std::cout << "Invalid input. Please enter again: " << std::endl;
			std::getline(std::cin, data);
		}
	} else {
		while (!std::cin.eof() && (data.empty() || is_all_space(data))) {
			std::cout << "Invalid input. Please enter again: " << std::endl;
			std::getline(std::cin, data);
		}
	}
	
	return (data);
}

void	PhoneBook::addContacts(void) {
	std::string firstName = getData("Enter the first name: ", 0);
	std::string lastName = getData("Enter the last name: ", 0);
	std::string nickname = getData("Enter the nickname: ", 0);
	std::string phoneNumber = getData("Enter the phone number: ", 1);
	std::string darkestSecret = getData("Enter the darkest secret: ", 0);

	Contact contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	
	static int i = 0;
	this->_contacts[i] = contact;
	i = (i + 1) % 8;
	if (this->size < 8) {
    	this->size++;
	}
}

void	PhoneBook::displayContacts(void) const {
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
	for (int i = 0; i < this->size; i++) {
		this->_contacts[i].displayShort(i);
	}
}

void	PhoneBook::searchContacts(void) const {
	if (this->size < 1) {
		std::cout << "No contacts saved." << std::endl;
		return;
	}
	this->displayContacts();
	std::string index;

	if (!std::cin.eof()) {
		std::cout << "Enter the index of the contact you want to see: " << std::endl;
		std::getline(std::cin, index);
	}
	do {
		if (!std::cin.eof() && (index.size() != 1 || index[0] < '1' || index[0] > '8')) {
			std::cout << "Invalid index. Please enter again:  " << std::endl;
			std::getline(std::cin, index);
		} else if (index[0] > this->size + '0') {		
			std::cout << "Contact not found. Please enter again:  " << std::endl;
			std::getline(std::cin, index);
		} else {
			break;
		}
	} while (!std::cin.eof());
	if (!std::cin.eof()) {
		int i = index[0] - '0' - 1;
		this->_contacts[i].displayFull();
	}
}
