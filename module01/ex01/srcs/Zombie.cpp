/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:51:39 by claprand          #+#    #+#             */
/*   Updated: 2025/01/15 13:05:18 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    return;
}

Zombie::Zombie(std::string name){
    this->_name = name;
    std::cout << _name << " is called by the constructor" << std::endl;
    return;
}

Zombie::~Zombie() {
    std::cout << _name << " is destroyed!" << std::endl;
}

void Zombie::announce(void){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
    this->_name = name;
}

std::string Zombie::getName() const{
    return (this->_name);
}
