/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:41:59 by claprand          #+#    #+#             */
/*   Updated: 2025/02/10 12:04:15 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Random form"), _signedBy("Not Signed"), _signed(false), _toSign(150), _toExecute(150){
    std::cout << "AForm default constructor called" << std::endl;
    return;
}

AForm::AForm(const std::string & name, int toSign, int toExecute) : _name(name), _signedBy("Not Signed"), _signed(false){
    std::cout << "AForm parametric constructor called" << std::endl;
    try{
        if (toSign < 1 || toExecute < 1)
            throw AForm::GradeTooHighException();
        else if (toSign > 150 || toExecute > 150)
            throw AForm::GradeTooLowException();
        else{
            _toSign = toSign;
            _toExecute = toExecute;
        }
    }
    catch (const std::exception & e){
        std::cout << e.what() << std::endl;
    }
}

AForm::AForm(AForm const & cpy) : _name(cpy._name),  _signedBy("Not signed"), _signed(false), _toSign(cpy._toSign), _toExecute(cpy._toExecute){
    std::cout << "AForm copy constructor called" << std::endl;
    *this = cpy;
}
        
AForm::~AForm(){
    std::cout << "AForm deconstructor called" << std::endl;
}

AForm & AForm::operator=(AForm const & rhs){
    if (this != &rhs){
        _signed = rhs.getSigned();
        _toExecute = rhs.getToExecute();
        _toSign = rhs.getToSign();
        _signedBy = rhs.getSignedBy();
    }
    return *this;
}

std::string const AForm::getName() const{
    return _name;
}

const std::string &	AForm::getSignedBy(void) const{
	return _signedBy;
}

bool AForm::getSigned(void) const{
    return _signed;
}

int AForm::getToSign(void) const{
    return _toSign;   
}

int AForm::getToExecute(void) const{
    return _toExecute;
}

void AForm::setSigned(bool isSigned){
    _signed = isSigned;
}

void AForm::beSigned(Bureaucrat const & bureaucrat){
    try{
        if (_signed)
            throw AForm::AFormIsAlreadySigned();
        if (bureaucrat.getGrade() > _toSign)
            throw AForm::GradeTooLowException();
        else{
            _signed = true;
            _signedBy = bureaucrat.getName();
        }
    }
    catch (const std::exception e){
        std::cout << e.what();
    }
}

void AForm::execute(Bureaucrat const & executor) const{
	try{
		if (!_signed)
			throw AForm::AFormIsNotSigned();
		else if (executor.getGrade() > _toExecute)
			throw AForm::GradeTooLowException();
		else{
			executeAction();
			std::cout << "Bureaucrat " << executor.getName() << " executed " << getName() << std::endl;
		}
	}
	catch(const std::exception& e){
		std::cout << "Bureaucrat " << executor.getName() << " can't execute because : " << e.what();
	}
}

std::ostream & operator<<(std::ostream & os, AForm const & rhs){
	os << rhs.getName() << " AForm, requires a grade " << rhs.getToSign() << " to be signed,"
	<< " requires a grade " << rhs.getToExecute() << " to execute." << "\nSigned by : "
	<< rhs.getSignedBy() << ".\n" ;
	return os ;
}

