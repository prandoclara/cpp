/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:52:26 by claprand          #+#    #+#             */
/*   Updated: 2025/02/04 10:31:10 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
    this->_type = CYAN "WrongCat" RESET;
    std::cout << CYAN << "WrongCat : Default constructor called!" << RESET << std::endl;
    return;
}

WrongCat::WrongCat(std::string type){
    std::cout << CYAN << "WrongCat : Parametric constructor called!" << RESET << std::endl;
    this->_type = type;
    return;
}

WrongCat::WrongCat(WrongCat const & cpy) : WrongAnimal(cpy){
    std::cout << CYAN << "WrongCat : Copy constructor called" << RESET << std::endl;
    this->_type = cpy._type;
    *this = cpy;
}

WrongCat::~WrongCat(){
    std::cout << CYAN << "WrongCat : Destructor called" << RESET << std::endl;
    return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs){
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

// void WrongCat::makeSound() const{
//     std::cout << CYAN << "I Meow but it sounds wierd" << RESET << std::endl;
// }
