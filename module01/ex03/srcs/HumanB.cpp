/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:52:21 by claprand          #+#    #+#             */
/*   Updated: 2025/01/15 16:55:45 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name), _weapon(0){
    std::cout << MAGENTA;
    std::cout << getName() << " called by constructor" << std::endl;
    std::cout << RESET;
    return;
}

HumanB::~HumanB(){
    std::cout << MAGENTA;
    std::cout << getName() << " called by destructor" << std::endl;
    std::cout << RESET;
    return;
}

std::string HumanB::getName() const{
    return (this->_name);
}

void HumanB::setName(std::string name){
    this->_name = name;
}

void HumanB::attack() const{
    if (!_weapon){
        std::cout << getName() << " attack with his hands" << std::endl;
    }
    else {
        std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl; 
    }
    return ;
}

void HumanB::setWeapon(const Weapon &newWeapon){
    this->_weapon = &newWeapon;
}
