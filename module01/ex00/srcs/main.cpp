/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:51:56 by claprand          #+#    #+#             */
/*   Updated: 2025/01/14 16:49:45 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    std::string name;
    Zombie  Zombie(name);
    
    //NewZombie
    Zombie.newZombie("Bernard");
    // Zombie.announce();
    
    std::cout << "-----------------------" << std::endl;

    //RandomChump
    Zombie.randomChump("Alice");
}