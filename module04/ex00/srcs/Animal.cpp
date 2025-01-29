/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:20:44 by claprand          #+#    #+#             */
/*   Updated: 2025/01/29 15:00:18 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
    std::cout << YELLOW << "Animal : " << RESET << "Default constructor called!" << std::endl;
    return;
}

Animal::Animal(std::string type){
    std::cout << YELLOW << "Animal : " << RESET << "Parametric constructor called!" << std::endl;
    this->_type = type;
    return;
}

Animal::Animal(Animal const & cpy){
    std::cout << YELLOW << "Animal : " << RESET << "Copy constructor called!" << std::endl;
    this->_type = cpy._type;
    *this = cpy;
}

Animal::~Animal(){
    std::cout << YELLOW << "Animal : " << RESET << "Deconstructor called!" << std::endl;
    return ;
}

Animal & Animal::operator=(Animal const & rhs){
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

std::string Animal::getType() const{
    return this->_type;
}

void Animal::setType(std::string type){
    this->_type = type;
}

std::string Animal::getSound() const{
    return this->_sound;
}

void Animal::setSound(std::string sound){
    this->_sound = sound;
}

void Animal::makeSound(){
    std::cout << _sound << std::endl;
}