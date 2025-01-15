/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:46:21 by claprand          #+#    #+#             */
/*   Updated: 2025/01/15 15:11:18 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
    return;
}

Weapon::Weapon(const std::string& type){
    this->_type = type;
}

Weapon::~Weapon(){
    return;
}

std::string Weapon::getType() const{
    return (this->_type);
}

void Weapon::setType(std::string type){
    this->_type = type;
}