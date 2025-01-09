/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:01:09 by hitran            #+#    #+#             */
/*   Updated: 2025/01/09 15:29:07 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	public:
		// Constructor
		PhoneBook();

		// Methods
		void addContacts(void);
		void searchContacts(void) const;
		void displayContacts(void) const;

		// Destructor
		~PhoneBook();

	private:
		Contact	_contacts[8];
		int		size;
};

#endif