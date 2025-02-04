/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:40:51 by claprand          #+#    #+#             */
/*   Updated: 2025/02/04 10:29:35 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->_type = BLUE "Dog" RESET;
    std::cout << BLUE << "Dog : Default constructor called!" << RESET << std::endl;
    return;
}

Dog::Dog(std::string type){
    std::cout << BLUE << "Dog : Parametric constructor called!" << RESET << std::endl;
    this->_type = type;
    return;
}

Dog::Dog(Dog const & cpy) : Animal(cpy){
    std::cout << BLUE << "Dog : Copy constructor called!" << RESET << std::endl;
    this->_type = cpy._type;
    *this = cpy;
}

Dog::~Dog(){
    std::cout << BLUE << "Dog : Destructor called!" << RESET << std::endl;
    return ;
}

Dog & Dog::operator=(Dog const & rhs){
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

void Dog::makeSound() const {
    std::cout << BLUE << "I bark : Waf Waf" << RESET << std::endl;
}