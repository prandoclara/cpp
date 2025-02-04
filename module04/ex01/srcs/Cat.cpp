/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:40:46 by claprand          #+#    #+#             */
/*   Updated: 2025/02/04 10:56:40 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal(), _catBrain(new Brain()){
    this->_type = MAGENTA "Cat" RESET;
    std::cout << MAGENTA << "Cat : Default constructor called!" << RESET << std::endl;
    return;
}

Cat::Cat(std::string type) : Animal(), _catBrain(new Brain()) {  
    std::cout << MAGENTA << "Cat : Parametric constructor called!" << RESET << std::endl;
    this->_type = type;
}

Cat::Cat(Cat const & cpy) : Animal(cpy){
    std::cout << MAGENTA << "Cat : Copy constructor called" << RESET << std::endl;
    this->_type = cpy._type;
    if (cpy._catBrain)
        _catBrain = new Brain(*cpy._catBrain);
    else
        _catBrain = 0;
    *this = cpy;
}

Cat::~Cat(){
    delete _catBrain;
    std::cout << MAGENTA << "Cat : Destructor called" << RESET << std::endl;
    return ;
}

Cat & Cat::operator=(Cat const & rhs) {
    if (this != &rhs) {
        this->_type = rhs.getType();
        delete _catBrain;
        if (rhs._catBrain)
            _catBrain = new Brain(*rhs._catBrain);
        else
            _catBrain = 0;
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << MAGENTA << "I Meow : Meow Meow" << RESET << std::endl;
}

Brain *Cat::getBrain() const{
    return this->_catBrain;
}