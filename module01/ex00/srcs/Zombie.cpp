/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:51:39 by claprand          #+#    #+#             */
/*   Updated: 2025/01/14 16:50:39 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    return;
}

Zombie::~Zombie() {
    std::cout << _name << " is destroyed!" << std::endl;
}

void Zombie::announce(void){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name){
    Zombie NewZombie = Zombie(name);
    return (NewZombie);
}

void Zombie::randomChump(std::string name){
    Zombie *RandomChump = new Zombie(name);
    RandomChump->_name = name;
    RandomChump->announce();
    delete(RandomChump);
} 