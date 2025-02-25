/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:40:46 by claprand          #+#    #+#             */
/*   Updated: 2025/02/04 10:40:29 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
    this->_type = MAGENTA "Cat" RESET;
    std::cout << MAGENTA << "Cat : Default constructor called!" << RESET << std::endl;
    return;
}

Cat::Cat(std::string type){
    std::cout << MAGENTA << "Cat : Parametric constructor called!" << RESET << std::endl;
    this->_type = type;
    return;
}

Cat::Cat(Cat const & cpy) : Animal(cpy){
    std::cout << MAGENTA << "Cat : Copy constructor called" << RESET << std::endl;
    this->_type = cpy._type;
    *this = cpy;
}

Cat::~Cat(){
    std::cout << MAGENTA << "Cat : Destructor called" << RESET << std::endl;
    return ;
}

Cat & Cat::operator=(Cat const & rhs){
    if (this != &rhs){
        this->_type = rhs.getType();
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << MAGENTA << "I Meow : Meow Meow" << RESET << std::endl;
}