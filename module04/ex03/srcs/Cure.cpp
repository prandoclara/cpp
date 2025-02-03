/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:44:54 by claprand          #+#    #+#             */
/*   Updated: 2025/02/03 15:11:58 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
    std::cout << CYAN << "Cure :  Default constructor called!" << RESET << std::endl;
    return;
}

Cure::Cure(Cure const & cpy) : AMateria( "cure" ){
    std::cout << CYAN << "Cure : Copy constructor called!"  << RESET << std::endl;
    *this = cpy;
}

Cure::~Cure(){
    std::cout << CYAN << "Cure : Deconstructor called!"  << RESET << std::endl;
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
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
