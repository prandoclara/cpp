/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:31:16 by claprand          #+#    #+#             */
/*   Updated: 2025/02/10 14:00:45 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default name"), _grade(_lowestGrade){
    std::cout << "Bureaucrat default constructor called" << std::endl;
    return;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name){
    std::cout << "Bureaucrat parametric constructor called" << std::endl;
    if (grade < 1)
		throw ( Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		_grade = grade;	
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy) : _name(cpy._name), _grade(cpy._grade){
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

        
Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat deconstructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){
    if (this != &rhs){
        this->_grade = rhs.getGrade();
    }
    return *this;
}

std::string const Bureaucrat::getName() const{
    return _name;
}

int Bureaucrat::getGrade() const{
    return _grade;
}

void Bureaucrat::setGrade(int grade){
    try {
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            _grade = grade;
    }
    catch(const std::exception& e){
        std::cout << e.what() << " Promotion candidate : " << *this << std::endl;
    }    
}

void Bureaucrat::incrementGrade(int promotion){
    if (promotion < 0)
        return;
    for (int i = 0; i < promotion; i++){
        if (_grade == 1)
            return;
        ++*this;
    }
}

void Bureaucrat::decrementGrade(int sack){
    if (sack < 0)
        return;
    for (int i = 0; i < sack; i++){
        if (_grade == 150)
            return;
        --*this;
    }
}

Bureaucrat & Bureaucrat::operator++(){
    try{
        if (_grade > 1)
            _grade--;
        else
            throw (Bureaucrat::GradeTooHighException());
    }
    catch (const std::exception& e){
		std::cout << e.what() << "Promotion candidate : " << *this;
    }
	return *this;
}

Bureaucrat & Bureaucrat::operator--(){
    try{
        if (_grade < 150)
            _grade++;
        else
            throw (Bureaucrat::GradeTooLowException());
    }
    catch (const std::exception& e){
		std::cout << e.what() << "Promotion candidate : " << *this;
    }
	return *this;
}

void Bureaucrat::signForm(Form & form){
    try{
        if (form.getSigned())
            throw Form::FormIsAlreadySigned();
        else if (getGrade() > form.getToSign())
            throw Form::GradeTooLowException();
        else{
            form.setSigned(true);
            std::cout << getName() << " signed form " << form.getName() << std::endl;
        }
    }
    catch (const std::exception & e){
        std::cout << e.what() << getName() << " couldn't sign form " << form.getName() << std::endl;
    }
}

std::ostream &	operator<<( std::ostream & os, Bureaucrat const & rhs ) {
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".\n" ;
	return os ;
}
