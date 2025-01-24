/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:26:14 by clara             #+#    #+#             */
/*   Updated: 2025/01/24 14:34:54 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    std::cout << GREEN << "TEST 1" << RESET << std::endl << std::endl;
    ClapTrap Bob("Bob");
    ClapTrap Bernard("Bernard");
    
    // std::cout << std::endl;
    // std::cout << MAGENTA << "BOB INFO :" << RESET << std::endl;
    // Bob.getAttackDamage();
    // Bob.getEnergyPoints();
    // Bob.getHitPoints();
    // std::cout << std::endl;

    // std::cout << GREEN << "BERNARD INFO :" << RESET << std::endl;
    // Bernard.getAttackDamage();
    // Bernard.getEnergyPoints();
    // Bernard.getHitPoints();
    // std::cout << std::endl;
    
    Bob.setAttackDamage(4);
	Bob.attack(Bernard.getName());
	Bernard.takeDamage(4);
    Bernard.getHitPoints();
    Bernard.setAttackDamage(10);
	Bernard.attack(Bob.getName());
    Bob.takeDamage(10);
    Bob.getHitPoints();
	Bernard.beRepaired(5);
    Bernard.getHitPoints();
    
    std::cout << std::endl << MAGENTA << "TEST 2" << RESET << std::endl << std::endl;
    ClapTrap Alice("Alice");
    ClapTrap George("George");
    
    // std::cout << MAGENTA << "ALICE INFO :" << RESET << std::endl;
    // Alice.getAttackDamage();
    // Alice.getEnergyPoints();
    // Alice.getHitPoints();
    // std::cout << std::endl;

    // std::cout << GREEN << "GEORGE INFO :" << RESET << std::endl;
    // George.getAttackDamage();
    // George.getEnergyPoints();
    // George.getHitPoints();
    // std::cout << std::endl;
    
    Alice.setAttackDamage(10);
    Alice.attack(George.getName());
    George.takeDamage(10);
    George.getHitPoints();
    George.attack(Alice.getName());
    George.beRepaired(10);
    std::cout << std::endl;
}