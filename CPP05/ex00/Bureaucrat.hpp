/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:24 by hitran            #+#    #+#             */
/*   Updated: 2025/03/04 10:21:22 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		virtual ~Bureaucrat();
		
		Bureaucrat 			&operator=(const Bureaucrat &other);
		
		class				GradeTooHighException;
		class				GradeTooLowException;
		const std::string	getName() const;
		int					getGrade();
		void				gradeIncrement(int value);
		void				gradeDecrement(int value);
	
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &source);
