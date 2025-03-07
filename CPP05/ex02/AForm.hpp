/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:44:39 by hitran            #+#    #+#             */
/*   Updated: 2025/03/07 12:06:04 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Bureaucrat.hpp"

class AForm
{
	public:
		AForm();
		AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
		AForm(const AForm &other);
		virtual ~AForm();
		
		AForm 			&operator=(const AForm &other);
		
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeNotHighEnoughException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		const std::string	getName() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		bool				getSignedStatus() const;
		bool				beSigned(Bureaucrat &bureaucrat);
		virtual void 		execute(Bureaucrat const & executor) const = 0;
		
	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_gradeToSign;
		const unsigned int	_gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, const AForm &source);
