/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:41:39 by clara             #+#    #+#             */
/*   Updated: 2025/01/29 11:38:54 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    this->_name = "ScavTrap Default Name";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << GREY << "ScavTrap default constructor called!" << RESET << std::endl;
    return;
}

ScavTrap::ScavTrap(std:: string name){
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << GREY << "ScavTrap " << this->_name << " constructor!" << RESET << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & cpy) : ClapTrap(){
    std::cout << GREY << "ScavTrap copy constructor called!" << RESET << std::endl ;
    *this = cpy ;
}

ScavTrap::~ScavTrap(){
    std::cout << GREY << "ScavTrap " << this->_name << " destroyed!" << RESET << std::endl;
    return; 
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName() ;
		this->_hitPoints = rhs.getHitPoints() ;
		this->_energyPoints = rhs.getEnergyPoints() ;
		this->_attackDamage = rhs.getAttackDamage() ;
	}
	return *this ;
}

void	ScavTrap::attack(const std::string & target){
	if (!this->_energyPoints || !this->_hitPoints)
	{
		std::cout << "ScavTrap " << this->_name << " has no " << (!this->_energyPoints ? "energy points" : "hit points") << ", so it cannot attack.." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ScavTrap::guardGate(void){
	if (!this->_hitPoints) {
		std::cout << "ScavTrap " << getName() << " can't activate guard mode cause he/she is dead" << std::endl;
		return;
	}
    std::cout << "ScavTrap " << getName() << " is now in Gate Keeper mode." << std::endl;
}