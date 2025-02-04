/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:20:44 by claprand          #+#    #+#             */
/*   Updated: 2025/01/30 15:44:48 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal"){
    std::cout << GREEN << "AAnimal :  Default constructor called!" << RESET << std::endl;
    return;
}

AAnimal::AAnimal(std::string type){
    std::cout << GREEN << "AAnimal : Parametric constructor called!" << RESET << std::endl;
    this->_type = type;
    return;
}

AAnimal::AAnimal(AAnimal const & cpy){
    std::cout << GREEN << "AAnimal : Copy constructor called!"  << RESET << std::endl;
    this->_type = cpy._type;
    *this = cpy;
}

AAnimal::~AAnimal(){
    std::cout << GREEN << "AAnimal : Deconstructor called!"  << RESET << std::endl;
    return ;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs){
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

std::string AAnimal::getType() const{
    return this->_type;
}

void AAnimal::setType(std::string type){
    this->_type = type;
}

void AAnimal::makeSound() const{
    std::cout << GREEN << "*No Sound*" << RESET << std::endl;
}