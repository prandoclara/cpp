/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:34:20 by claprand          #+#    #+#             */
/*   Updated: 2025/02/06 11:49:29 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
    std::cout << "Intern constructor called" << std::endl;
    return;
}

Intern::Intern(Intern const & cpy){
    std::cout << "Intern copy constructor called" << std::endl;
    *this = cpy;
}

Intern::~Intern(){
    std::cout << "Intern destructor called" << std::endl;
    return;
}

Intern & Intern::operator=(Intern const & rhs){
    (void)rhs;
    return *this;
}

AForm *	Intern::makeForm(const std::string & formName, const std::string & target){
	try{
		std::string	forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
		AForm * 	newForm = NULL;
		int			index = -1;

		for (int i = 0; i < 3; i++){
			if (!forms[i].compare(formName)){
				index = i;
				break;
			}
		}
		switch (index){
			case 0:
				newForm = new PresidentialPardonForm(target);
				break;
			case 1:
				newForm = new RobotomyRequestForm(target);
				break;
			case 2:
				newForm = new ShrubberyCreationForm(target);
				break; 
			default:
				throw Intern::unknownForm();
		}
		return newForm;
	}
	catch (const std::exception& e){
		std::cout << e.what();
		return NULL;
	}
}