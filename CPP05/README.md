# C++ Module 05
# Introduction
This module introduces exception handling and C++ exception classes, while also reinforcing inheritance and polymorphism. The exercises focus on creating a bureaucratic system where objects interact through forms and exceptions.
# Exercises
## Exercise 00: Bureaucrat & Exception Handling
- Implement a Bureaucrat class with:
    - A constant _name.
    - A _grade (1 = highest, 150 = lowest).
    - getName() and getGrade() functions.
    - incrementGrade() and decrementGrade() functions.
- If the grade is out of bounds, throw:
    - GradeTooHighException (grades < 1).
    - GradeTooLowException (grades > 150).
- Overload the << operator to print:
```- Avoid using multiple if/else blocks by using an array of function pointer contains lamda functions.
<name>, bureaucrat grade <grade>.
```
- Usage:
```bash
cd ex00
make
./Bureaucrat
```
## Exercise 01: Forms & Signing
- Implement a Form class with:
    - A constant _name.
    - A boolean _signed (initially false).
    - 2 grades: _gradeToSign and _gradeToExecute.
    - 4 functions to get private members: getName(), getGradeToSign(), getGradeToExecute(), getSignedStatus().
- 3 exception classes: GradeTooHighException, GradeTooLowException,  FormWasSignedException.
- Add a Form::beSigned(Bureaucrat& bureaucrat) function:
    - If bureaucrat's grade is high enough, set _signed = true.
    - Otherwise, throw Form::GradeTooLowException or FormWasSignedException.
- Add Bureaucrat::signForm(Form&) to attempt signing by calling Form::beSigned().
- Usage:
```bash
cd ex01
make
./Form
```

## Exercise 02: Abstract Forms & Actions
- Convert Form into an abstract class (AForm).
- Implement three concrete forms:
    - ShrubberyCreationForm (creates an ASCII tree file).
    - RobotomyRequestForm (50% chance of successful robotization).
    - PresidentialPardonForm (grants a pardon).
- These concrete forms use AForm::checkRequirements(Bureaucrat const & executor) to check that the form is signed and the bureaucrat's grade is high enough.
- Add Bureaucrat::executeForm(AForm const & form) const:
    - Try to call the form's execute function.
    - Catch and print out a proper message.

- Usage:
```bash
cd ex02
make
./ExecuteForm
```

## Exercise 03: Interns & Form Creation
- Implement an Intern class with:
    - makeForm(std::string name, std::string target), which creates a form dynamically.
    - If name is invalid, print an error.
- Avoid using multiple if/else blocks by using an array of function pointers that contain lamda functions.
- Usage:
```bash
cd ex03
make
./Intern
```
