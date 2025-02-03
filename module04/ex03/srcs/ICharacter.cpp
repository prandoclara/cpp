/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:22:52 by claprand          #+#    #+#             */
/*   Updated: 2025/01/31 16:48:43 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() : _name("Unknown Character"), _inventorySize(0){
    for (int i = 0; i < 4; i++){
        _inventory[i] = 0;
    }
    std::cout << GREEN << "ICharacter :  Default constructor called!" << RESET << std::endl;
    return;
}

ICharacter::ICharacter(std::string name) : _name(name), _inventorySize(0){
    for (int i = 0; i < 4; i++){
        _inventory[i] = 0;
    }
    std::cout << GREEN << "ICharacter : Parametric constructor called!" << RESET << std::endl;
    return;
}

ICharacter::ICharacter(ICharacter const & cpy) : _inventorySize(0){
    for (int i = 0; i < 4; i++){
        _inventory[i] = 0;
    }
    std::cout << GREEN << "ICharacter : Copy constructor called!"  << RESET << std::endl;
    this->_name = cpy._name;
    *this = cpy;
}

ICharacter::~ICharacter(){
    std::cout << GREEN << "ICharacter : Deconstructor called!"  << RESET << std::endl;
    return ;
}

ICharacter & ICharacter::operator=(ICharacter const & rhs){
    if (this != &rhs)
        this->_name = rhs.getName();
    return *this;
}

std::string const & ICharacter::getName() const{
    return this->_name;
}

std::string const & ICharacter::getIventorySize() const{
    return this->_inventorySize;
}