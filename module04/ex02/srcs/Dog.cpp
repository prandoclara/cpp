/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:40:51 by claprand          #+#    #+#             */
/*   Updated: 2025/02/04 11:20:06 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : AAnimal(), _dogBrain(new Brain()){
    this->_type = BLUE "Dog" RESET;
    std::cout << BLUE << "Dog : Default constructor called!" << RESET << std::endl;
    return;
}

Dog::Dog(std::string type){
    std::cout << BLUE << "Dog : Parametric constructor called!" << RESET << std::endl;
    this->_type = type;
    return;
}

Dog::Dog(Dog const & cpy) : AAnimal(cpy){
    std::cout << MAGENTA << "Dog : Copy constructor called" << RESET << std::endl;
    this->_type = cpy._type;
    if (cpy._dogBrain)
        _dogBrain = new Brain(*cpy._dogBrain);
    else
        _dogBrain = 0;
}

Dog::~Dog(){
    delete _dogBrain;
    std::cout << BLUE << "Dog : Destructor called!" << RESET << std::endl;
    return ;
}

Dog & Dog::operator=(Dog const & rhs) {
    if (this != &rhs) {
        this->_type = rhs.getType();
        delete _dogBrain;
        if (rhs._dogBrain)
            _dogBrain = new Brain(*rhs._dogBrain);
        else
            _dogBrain = 0;
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << BLUE << "I bark : Waf Waf" << RESET << std::endl;
}

Brain *Dog::getBrain() const{
    return this->_dogBrain;
}