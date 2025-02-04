/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:20:44 by claprand          #+#    #+#             */
/*   Updated: 2025/02/04 10:43:19 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
    std::cout << GREEN << "Animal :  Default constructor called!" << RESET << std::endl;
    return;
}

Animal::Animal(std::string type){
    std::cout << GREEN << "Animal : Parametric constructor called!" << RESET << std::endl;
    this->_type = type;
    return;
}

Animal::Animal(Animal const & cpy){
    std::cout << GREEN << "Animal : Copy constructor called!"  << RESET << std::endl;
    this->_type = cpy._type;
    *this = cpy;
}

Animal::~Animal(){
    std::cout << GREEN << "Animal : Deconstructor called!"  << RESET << std::endl;
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

void Animal::makeSound() const{
    std::cout << GREEN << "*No Sound*" << RESET << std::endl;
}