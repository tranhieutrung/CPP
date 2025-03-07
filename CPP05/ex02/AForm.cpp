/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:44:44 by hitran            #+#    #+#             */
/*   Updated: 2025/03/07 12:15:47 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): 
						_name("unNamedAForm"),
						_signed(false),
						_gradeToSign(150),
						_gradeToExecute(150) {
	std::cout << "AForm: Default constructor called" << std::endl;
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute):
						_name(name),
						_signed(false),
						_gradeToSign(gradeToSign),
						_gradeToExecute(gradeToExecute)  {
	std::cout << "AForm: Constructor (with parameters) called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1) {
		throw (GradeTooHighException());
	} else if (gradeToSign > 150 || gradeToExecute > 150) {
		throw (GradeTooLowException());
	}
}

AForm::AForm(const AForm &other): 
						_name(other._name),
						_signed(other._signed),
						_gradeToSign(other._gradeToSign),
						_gradeToExecute(other._gradeToExecute) {
	std::cout << "AForm: Copy constructor called" << std::endl;
}

AForm::~AForm() {
	std::cout << "AForm: Destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other) {
	std::cout << "AForm: Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_signed = other._signed;
	}
	return (*this);
}

const std::string	AForm::getName() const {
	return (this->_name);
}

int	AForm::getGradeToSign() const {
	return (this->_gradeToSign);
}

int	AForm::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

bool	AForm::getSignedStatus() const {
	return (this->_signed);
}

bool AForm::beSigned(Bureaucrat &bureaucrat){
	if (this->_signed) {
		return (false);
	} else if (bureaucrat.getGrade() <= this->_gradeToSign) {
		this->_signed = true;
		return (true);
	} else {
		throw (GradeTooLowException());
	}
}

const char *AForm::GradeTooHighException::what() const throw() {
    return ("AForm: The grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw() {
    return ("AForm: The grade is too low");
}

const char *AForm::FormNotSignedException::what() const throw() {
	return ("the form is not signed");
}

const char *AForm::GradeNotHighEnoughException::what() const throw() {
	return ("the grade is not high enough");
}

std::ostream &operator<<(std::ostream &out, const AForm &source) {
	out << source.getName() << ", grade to sign: " << source.getGradeToSign()
		<<  ", grade to execute: " << source.getGradeToExecute() 
		<< " , status: " << (source.getSignedStatus() ? "signed" : "not signed");
	return (out);
}
