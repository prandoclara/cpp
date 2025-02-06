/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:39:11 by claprand          #+#    #+#             */
/*   Updated: 2025/02/05 14:39:44 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(), _target("default target"){
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : AForm(){
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy) : AForm(cpy){
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    _target = cpy._target;
    *this = cpy;
}
        
PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm deconstructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
    if (this != &rhs){
        _target = rhs.getTarget();
    }
    return *this;
}

const std::string & PresidentialPardonForm::getTarget() const{
    return _target;
}

void	PresidentialPardonForm::executeAction() const{
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;   
}