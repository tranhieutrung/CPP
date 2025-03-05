/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:44:44 by hitran            #+#    #+#             */
/*   Updated: 2025/03/05 15:19:01 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): 
						_name("unNamed"),
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

void Form::beSigned(Bureaucrat &bureaucrat){
	if (this->_signed) {
		std::cout << bureaucrat.getName() << "  couldn’t sign " 
			<< this->_name << " because it has already signed" <<std::endl;
	} else if (bureaucrat.getGrade() <= this->_gradeToSign) {
		std::cout << bureaucrat.getName() << "  signed " 
			<< this->_name <<std::endl;
		this->_signed = true;
	} else {
		std::cout << bureaucrat.getName() << "  couldn’t sign " 
			<< this->_name << " because their grade is not high enough." <<std::endl;
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
