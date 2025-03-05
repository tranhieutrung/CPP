/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:44:44 by hitran            #+#    #+#             */
/*   Updated: 2025/03/05 13:44:52 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): 
						_name("unNamed"), _grade(150) {
	std::cout << "Form: Default constructor called" << std::endl;
}

Form::Form(const std::string name, unsigned int grade): _name(name) {
	std::cout << "Form: Constructor with name and grade called" << std::endl;
	if (grade < 1) {
		throw (GradeTooHighException());
	} else if (grade > 150) {
		throw (GradeTooLowException());
	} else {
		this->_grade = grade;
	}
}

Form::Form(const Form &other): 
						_name(other._name), _grade(other._grade) {
	std::cout << "Form: Copy constructor called" << std::endl;
}

Form::~Form() {
	std::cout << "Form: Destructor called" << std::endl;
}

Form &Form::operator=(const Form &other) {
	std::cout << "Form: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_grade = other._grade;
	}
	return (*this);
}

const std::string	Form::getName() const {
	return (this->_name);
}

int	Form::getGrade() const {
	return (this->_grade);
}

void	Form::gradeIncrement() {
	std::cout << "Form: gradeIncrement called" << std::endl;
	if (this->_grade <= 1) {
		throw (GradeTooHighException());
	}
	else {
		this->_grade--;
	}
}

void	Form::gradeDecrement() {
	std::cout << "Form: gradeDecrement called" << std::endl;
	if (this->_grade >= 150) {
		throw (GradeTooLowException());
	}
	else {
		this->_grade++;
	}
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("The grade is too high");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("The grade is too low");
}

std::ostream &operator<<(std::ostream &out, const Form &source) {
	out << source.getName() << ", Form grade " << source.getGrade();
	return (out);
}
