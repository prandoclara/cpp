/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:48:58 by claprand          #+#    #+#             */
/*   Updated: 2025/01/30 11:49:16 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
    std::cout << ORANGE << "WrongAnimal :  Default constructor called!" << RESET << std::endl;
    return;
}

WrongAnimal::WrongAnimal(std::string type){
    std::cout << ORANGE << "WrongAnimal : Parametric constructor called!" << RESET << std::endl;
    this->_type = type;
    return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy){
    std::cout << ORANGE << "WrongAnimal : Copy constructor called!"  << RESET << std::endl;
    this->_type = cpy._type;
    *this = cpy;
}

WrongAnimal::~WrongAnimal(){
    std::cout << ORANGE << "WrongAnimal : Deconstructor called!"  << RESET << std::endl;
    return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs){
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

std::string WrongAnimal::getType() const{
    return this->_type;
}

void WrongAnimal::setType(std::string type){
    this->_type = type;
}

void WrongAnimal::makeSound() const{
    std::cout << ORANGE << "*makes a random WrongAnimal sound*" << RESET << std::endl;
}