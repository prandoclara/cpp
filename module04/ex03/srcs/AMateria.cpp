/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:53:13 by claprand          #+#    #+#             */
/*   Updated: 2025/01/31 16:25:44 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default type"){
    std::cout << GREEN << "AMateria :  Default constructor called!" << RESET << std::endl;
    return;
}

AMateria::AMateria(std::string const & type){
    std::cout << GREEN << "AMateria : Parametric constructor called!" << RESET << std::endl;
    this->_type = type;
    return;
}

AMateria::AMateria(AMateria const & cpy){
    std::cout << GREEN << "AMateria : Copy constructor called!"  << RESET << std::endl;
    this->_type = cpy._type;
    *this = cpy;
}

AMateria::~AMateria(){
    std::cout << GREEN << "AMateria : Deconstructor called!"  << RESET << std::endl;
    return ;
}

AMateria & AMateria::operator=(AMateria const & rhs){
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

std::string const & AMateria::getType() const{
    return this->_type;
}

void AMateria::use(ICharacter & target){
    std::cout << "* uses a " << getType() << " effect toward " << target.getName() << " *"<< std::endl;
}