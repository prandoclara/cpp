/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:44:54 by claprand          #+#    #+#             */
/*   Updated: 2025/01/31 16:36:00 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
    std::cout << GREEN << "Cure :  Default constructor called!" << RESET << std::endl;
    return;
}

Cure::Cure(Cure const & cpy) : AMateria( "Cure" ){
    std::cout << GREEN << "Cure : Copy constructor called!"  << RESET << std::endl;
    *this = cpy;
}

Cure::~Cure(){
    std::cout << GREEN << "Cure : Deconstructor called!"  << RESET << std::endl;
    return ;
}

Cure & Cure::operator=(Cure const & rhs){
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

AMateria *Cure::clone() const{
    AMateria *cloned = new Cure();
    return cloned;
}

void	Cure::use(ICharacter & target){
	std::cout << "Cure : * heals " << target.getName() << "'s wounds *\n";
}

std::string const & Cure::getName() const{
    return this->_name;
}