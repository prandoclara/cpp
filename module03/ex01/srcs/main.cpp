/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:26:14 by clara             #+#    #+#             */
/*   Updated: 2025/01/24 15:39:07 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    ClapTrap clap("Clappy");
    std::cout << std::endl;
    
    ScavTrap scav("Scavy");
    std::cout << std::endl;
    
    scav.guardGate();
    std::cout << std::endl;
    
    clap.attack("Target A");
    clap.takeDamage(5);
    clap.beRepaired(3);
    std::cout << std::endl;
    
    scav.attack("Target B");
    scav.takeDamage(15);
    scav.beRepaired(10);
    std::cout << std::endl;

    return 0;
}

