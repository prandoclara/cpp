/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:40:51 by claprand          #+#    #+#             */
/*   Updated: 2025/01/29 14:56:46 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->_type = "Dog";
    std::cout << BLUE << "Dog : " << RESET << "Default constructor called!" << std::endl;
    return;
}

Dog::Dog(std::string type){
    std::cout << BLUE << "Dog : " << RESET << "Parametric constructor called!" << std::endl;
    this->_type = type;
    return;
}

Dog::Dog(Dog const & cpy){
    std::cout << BLUE << "Dog : " << RESET << "Copy constructor called!" << std::endl;
    this->_type = cpy._type;
    *this = cpy;
}

Dog::~Dog(){
    std::cout << BLUE << "Dog : " << RESET << "Destructor called!" << std::endl;
    return ;
}

Dog & Dog::operator=(Dog const & rhs){
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}
