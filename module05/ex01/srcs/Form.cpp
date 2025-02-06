/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:39:37 by claprand          #+#    #+#             */
/*   Updated: 2025/02/06 14:11:41 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default name"), _signedBy("Not Signed"), _signed(false), _toSign(150), _toExecute(150){
    std::cout << "Form default constructor called" << std::endl;
    return;
}

Form::Form(const std::string & name, int toSign, int toExecute) : _name(name), _signedBy("Not Signed"), _signed(false){
    std::cout << "Form parametric constructor called" << std::endl;
    try{
        if (toSign < 1 || toExecute < 1)
            throw Form::GradeTooHighException();
        else if (toSign > 150 || toExecute > 150)
            throw Form::GradeTooLowException();
        else{
            _toSign = toSign;
            _toExecute = toExecute;
        }
    }
    catch (const std::exception e){
        std::cout << e.what() << std::endl;
    }
}

Form::Form(Form const & cpy) : _name(cpy._name),  _signedBy("Not signed"), _signed(false), _toSign(cpy._toSign), _toExecute(cpy._toExecute){
    std::cout << "Form copy constructor called" << std::endl;
    *this = cpy;
}
        
Form::~Form(){
    std::cout << "Form deconstructor called" << std::endl;
}

Form & Form::operator=(Form const & rhs){
    if (this != &rhs){
        _signed = rhs.getSigned();
        _toExecute = rhs.getToExecute();
        _toSign = rhs.getToSign();
        _signedBy = rhs.getSignedBy();
    }
    return *this;
}

std::string const Form::getName() const{
    return _name;
}

const std::string &	Form::getSignedBy(void) const{
	return _signedBy;
}

bool Form::getSigned(void) const{
    return _signed;
}

int Form::getToSign(void) const{
    return _toSign;   
}

int Form::getToExecute(void) const{
    return _toExecute;
}

void Form::setSigned(bool isSigned){
    _signed = isSigned;
}

void Form::beSigned(Bureaucrat const & bureaucrat){
    try{
        if (_signed)
            throw Form::FormIsAlreadySigned();
        if (bureaucrat.getGrade() > _toSign)
            throw Form::GradeTooLowException();
        else{
            _signed = true;
            _signedBy = bureaucrat.getName();
        }
    }
    catch (const std::exception e){
        std::cout << e.what();
    }
}

std::ostream & operator<<(std::ostream & os, Form const & rhs){
	os << rhs.getName() << " form, requires a grade " << rhs.getToSign() << " to be signed,"
	<< " requires a grade " << rhs.getToExecute() << " to execute." << "\nSigned by : "
	<< rhs.getSignedBy() << ".\n" ;
	return os ;
}

