/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:01:38 by hitran            #+#    #+#             */
/*   Updated: 2025/03/06 13:48:55 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);

		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class ExecuteGradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		const std::string		getTarget() const;
		void 					execute(Bureaucrat const & executor) const;
		
	private:
		std::string				_target;
};
