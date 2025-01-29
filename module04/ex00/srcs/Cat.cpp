/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:40:46 by claprand          #+#    #+#             */
/*   Updated: 2025/01/29 14:56:26 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
    this->_type = "Cat";
    std::cout << MAGENTA << "Cat : " << RESET << " Default constructor called!" << std::endl;
    return;
}

Cat::Cat(std::string type){
    std::cout << MAGENTA << "Cat : " << RESET << " Parametric constructor called!" << std::endl;
    this->_type = type;
    return;
}

Cat::Cat(Cat const & cpy){
    std::cout << MAGENTA << "Cat : " << RESET << "Copy constructor called" << std::endl;
    this->_type = cpy._type;
    *this = cpy;
}

Cat::~Cat(){
    std::cout << MAGENTA << "Cat : " << RESET << "Destructor called" << std::endl;
    return ;
}

Cat & Cat::operator=(Cat const & rhs){
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}
