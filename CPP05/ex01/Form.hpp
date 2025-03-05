/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:44:39 by hitran            #+#    #+#             */
/*   Updated: 2025/03/05 14:49:36 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Bureaucrat.hpp"

class Form
{
	public:
	Form();
	Form(const std::string name, bool status, const int gradeToSign, const int gradeToExecute);
	Form(const Form &other);
		virtual ~Form();
		
		Form 			&operator=(const Form &other);
		
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
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		bool				getSignedStatus() const;
		void				beSigned(Bureaucrat &bureaucrat);
	
	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_gradeToSign;
		const unsigned int	_gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, const Form &source);
