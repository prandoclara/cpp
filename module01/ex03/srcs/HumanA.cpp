/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:52:34 by claprand          #+#    #+#             */
/*   Updated: 2025/01/27 10:51:52 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() : _weapon(*(new Weapon("default"))){
    return;
}

HumanA::HumanA(const std::string & name, Weapon & weapon) : _name(name), _weapon(weapon) {
   std::cout << RED;
   std::cout << getName() << " called by constructor" << std::endl;
   std::cout << RESET;
   return;
}

HumanA::~HumanA(){
    std::cout << RED;
    std::cout << getName() << " called by destructor" << std::endl;
    std::cout << RESET;
    return;
}

std::string HumanA::getName() const{
    return (this->_name);
}

void HumanA::setName(std::string name){
    this->_name = name;
}

void HumanA::attack() const{
    std::cout << getName() << " attacks with their " << _weapon.getType() << std::endl;
}

