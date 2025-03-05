/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:24 by hitran            #+#    #+#             */
/*   Updated: 2025/03/05 13:52:46 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <stdexcept>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &other);
		virtual ~Bureaucrat();
		
		Bureaucrat 			&operator=(const Bureaucrat &other);
		
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		const std::string	getName() const;
		int					getGrade() const;
		void				gradeIncrement();
		void				gradeDecrement();
		void				signForm(Form &form);
		
	private:
		const std::string	_name;
		unsigned int		_grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &source);
