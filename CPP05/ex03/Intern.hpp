/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:24 by hitran            #+#    #+#             */
/*   Updated: 2025/03/10 11:31:05 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class AForm;

class Intern
{
	public:
		Intern();
		Intern(const Intern &other);
		~Intern();
		
		Intern 	&operator=(const Intern &other);
		
		AForm	*makeForm(std::string name, const std::string target);
		
	private:

};
