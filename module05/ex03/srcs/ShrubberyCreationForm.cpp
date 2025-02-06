/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:39:02 by claprand          #+#    #+#             */
/*   Updated: 2025/02/05 16:04:57 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), _target("default target"){
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm(){
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy) : AForm(cpy){
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    _target = cpy._target;
    *this = cpy;
}
        
ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm deconstructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
    if (this != &rhs){
        _target = rhs.getTarget();
    }
    return *this;
}

const std::string & ShrubberyCreationForm::getTarget() const{
    return _target;
}

void	ShrubberyCreationForm::executeAction() const{
    std::string fileName = getTarget() + "_shrubberry";
    try {
        std::ofstream file(fileName.c_str(), std::ios::out);
        if (!file.is_open())
            throw std::runtime_error("Error while opening " + fileName);
    file << _tree; 
    }
    catch (std::exception e){
        std::cerr << e.what() << std::endl;
    }
}

const std::string ShrubberyCreationForm::_tree =
    "   *   \n"
    "  ***  \n"
    " ***** \n"
    "*******\n"
    "  | |  \n";
