/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:31:16 by claprand          #+#    #+#             */
/*   Updated: 2025/02/03 16:46:06 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default name"), _grade(150){
    std::cout << "Bureaucrat default deconstructor called" << std::endl;
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy) : _name(cpy._name){
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    this->_grade = cpy._grade;
    *this = cpy;
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

        // Bureaucrat::GradeTooHighException
        // Bureaucrat::GradeTooLowException


std::string const Bureaucrat::getName() const{
    return _name;
}

int Bureaucrat::getGrade() const{
    return _grade;
}

Bureaucrat & Bureaucrat::operator<<(Bureaucrat const & rhs){
    
}