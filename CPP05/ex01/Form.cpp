/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:44:44 by hitran            #+#    #+#             */
/*   Updated: 2025/03/06 10:35:48 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): 
						_name("unNamedForm"),
						_signed(false),
						_gradeToSign(150),
						_gradeToExecute(150) {
	std::cout << "Form: Default constructor called" << std::endl;
}

Form::Form(const std::string name, bool status, const int gradeToSign, const int gradeToExecute):
						_name(name),
						_signed(status),
						_gradeToSign(gradeToSign),
						_gradeToExecute(gradeToExecute)  {
	std::cout << "Form: Constructor (with parameters) called" << std::endl;
}

Form::Form(const Form &other): 
						_name(other._name),
						_signed(other._signed),
						_gradeToSign(other._gradeToSign),
						_gradeToExecute(other._gradeToExecute) {
	std::cout << "Form: Copy constructor called" << std::endl;
}

Form::~Form() {
	std::cout << "Form: Destructor called" << std::endl;
}

Form &Form::operator=(const Form &other) {
	std::cout << "Form: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_signed = other._signed;
	}
	return (*this);
}

const std::string	Form::getName() const {
	return (this->_name);
}

int	Form::getGradeToSign() const {
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

bool	Form::getSignedStatus() const {
	return (this->_signed);
}

bool Form::beSigned(Bureaucrat &bureaucrat){
	if (this->_signed) {
		return (false);
	} else if (bureaucrat.getGrade() <= this->_gradeToSign) {
		this->_signed = true;
		return (true);
	} else {
		return (false);
	}
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Form: The grade is too high");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Form: The grade is too low");
}

std::ostream &operator<<(std::ostream &out, const Form &source) {
	out << source.getName() << ", grade to sign: " << source.getGradeToSign()
		<<  ", grade to execute: " << source.getGradeToExecute() 
		<< " , status: " << (source.getSignedStatus() ? "signed" : "not signed");
	return (out);
}
