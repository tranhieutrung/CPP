/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:54:40 by hitran            #+#    #+#             */
/*   Updated: 2025/01/10 15:51:37 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

Contact::Contact(	const std::string &first_name,
					const std::string &last_name,
					const std::string &nickname,
					const std::string &phone_number,
					const std::string &darkest_secret) {
    this->_first_name = first_name;
    this->_last_name = last_name;
    this->_nickname = nickname;
    this->_phone_number = phone_number;
    this->_darkest_secret = darkest_secret;
}

std::string  truncateString(const std::string &data) {
	if (data.length() > 10)
		return (data.substr(0, 9) + ".");
	return (data);
}

void Contact::displayShort(int index) const {
	std::cout << std::setw(10) << index + 1 << "|"; 
	std::cout << std::setw(10) << truncateString(this->_first_name) << "|";
	std::cout << std::setw(10) << truncateString(this->_last_name) << "|";
	std::cout << std::setw(10) << truncateString(this->_nickname) << "|";
	std::cout << std::endl;
}

void Contact::displayFull(void) const {
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}
