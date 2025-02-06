/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:39:11 by claprand          #+#    #+#             */
/*   Updated: 2025/02/06 14:32:19 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(), _target("Roboto Request Form"){
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) : AForm(){
    std::cout << "RobotomyRequestForm parametric constructor called" << std::endl;
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy) : AForm(cpy){
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    _target = cpy._target;
    *this = cpy;
}
        
RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm deconstructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){
    if (this != &rhs){
        _target = rhs.getTarget();
    }
    return *this;
}

const std::string & RobotomyRequestForm::getTarget() const{
    return _target;
}

void	RobotomyRequestForm::executeAction() const{
    std::cout << "some drilling noises" << std::endl;
    if (std::rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy failed on " << getTarget() << std::endl; 
}