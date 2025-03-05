/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:29 by hitran            #+#    #+#             */
/*   Updated: 2025/03/05 13:22:56 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

Bureaucrat::Bureaucrat(): 
						_name("unNamed"), _grade(150) {
	std::cout << "Bureaucrat: Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade): _name(name) {
	std::cout << "Bureaucrat: Constructor with name and grade called" << std::endl;
	if (grade < 1) {
		throw (GradeTooHighException());
	} else if (grade > 150) {
		throw (GradeTooLowException());
	} else {
		this->_grade = grade;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): 
						_name(other._name), _grade(other._grade) {
	std::cout << "Bureaucrat: Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat: Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	std::cout << "Bureaucrat: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_grade = other._grade;
	}
	return (*this);
}

const std::string	Bureaucrat::getName() const {
	return (this->_name);
}

int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

void	Bureaucrat::gradeIncrement() {
	std::cout << "Bureaucrat: gradeIncrement called" << std::endl;
	if (this->_grade <= 1) {
		throw (GradeTooHighException());
	}
	else {
		this->_grade--;
	}
}

void	Bureaucrat::gradeDecrement() {
	std::cout << "Bureaucrat: gradeDecrement called" << std::endl;
	if (this->_grade >= 150) {
		throw (GradeTooLowException());
	}
	else {
		this->_grade++;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &source) {
	out << source.getName() << ", bureaucrat grade " << source.getGrade();
	return (out);
}
