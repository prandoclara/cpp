/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapp.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:17:27 by clara             #+#    #+#             */
/*   Updated: 2025/01/20 18:44:21 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    return;
}

ClapTrap::ClapTrap(std::string name) : _name(name){
    return ;
}

ClapTrap::~ClapTrap(){
    return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
    if (this != &rhs)
		this->_name = rhs.getName();
        this->_hitPoints = rhs.getHitPoints();
        this->_attackDamege = rhs.getAttackDamage();
        this->_energyPoints = rhs.getEnergyPoints(); 
    return *this;   
}

void ClapTrap::setName(std::string name){
    this->_name= name;
}

std::string ClapTrap::getName() const{
    return (this->_name);
}
