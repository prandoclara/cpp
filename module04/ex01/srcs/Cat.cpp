/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:40:46 by claprand          #+#    #+#             */
/*   Updated: 2025/01/30 16:01:46 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal(), _catBrain(new Brain()){
    this->_type = MAGENTA "Cat" RESET;
    this->_sound = MAGENTA "I Meow : Meow Meow" RESET;
    std::cout << MAGENTA << "Cat : Default constructor called!" << RESET << std::endl;
    return;
}

Cat::Cat(std::string type){
    std::cout << MAGENTA << "Cat : Parametric constructor called!" << RESET << std::endl;
    this->_type = type;
    return;
}

Cat::Cat(Cat const & cpy){
    std::cout << MAGENTA << "Cat : Copy constructor called" << RESET << std::endl;
    this->_type = cpy._type;
    *this = cpy;
}

Cat::~Cat(){
    delete _catBrain;
    std::cout << MAGENTA << "Cat : Destructor called" << RESET << std::endl;
    return ;
}

Cat & Cat::operator=(Cat const & rhs){
    if (this != &rhs){
        this->_type = rhs.getType();
        delete _catBrain;
        _catBrain = new Brain(*rhs._catBrain);
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << _sound << std::endl;
}
