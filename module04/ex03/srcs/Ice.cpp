/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:07:04 by claprand          #+#    #+#             */
/*   Updated: 2025/02/03 15:07:55 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    std::cout << CYAN << "Ice :  Default constructor called!" << RESET << std::endl;
    return;
}

Ice::Ice(Ice const & cpy) : AMateria( "ice" ){
    std::cout << CYAN << "Ice : Copy constructor called!"  << RESET << std::endl;
    *this = cpy;
}

Ice::~Ice(){
    std::cout << CYAN << "Ice : Deconstructor called!"  << RESET << std::endl;
    return ;
}

Ice & Ice::operator=(Ice const & rhs){
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

AMateria *Ice::clone() const{
    AMateria *cloned = new Ice();
    return cloned;
}

void	Ice::use(ICharacter & target){
	std::cout <<  "* shoots an ice bolt at  " << target.getName() << " *" << std::endl;
}
