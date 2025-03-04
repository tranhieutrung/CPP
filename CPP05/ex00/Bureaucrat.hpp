/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:24 by hitran            #+#    #+#             */
/*   Updated: 2025/03/04 11:08:42 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <stdexcept>
# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &other);
		virtual ~Bureaucrat();
		
		Bureaucrat 			&operator=(const Bureaucrat &other);
		
		class				GradeTooHighException;
		class				GradeTooLowException;
		const std::string	getName() const;
		int					getGrade() const;
		void				gradeIncrement();
		void				gradeDecrement();
	
	private:
		const std::string	_name;
		unsigned int		_grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &source);
