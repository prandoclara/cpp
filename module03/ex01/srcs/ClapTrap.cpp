/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:43:17 by clara             #+#    #+#             */
/*   Updated: 2025/01/29 11:30:28 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    this->_name = "Default Name";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << GREY << "ClapTrap constructor called!" << RESET << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : _name(name){
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << GREY << "ClapTrap " << this->_name << " constructor!" << RESET << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &cpy){
    this->_name = cpy._name;
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	this->_attackDamage = cpy._attackDamage;
	std::cout << GREY << "ClapTrap " << this->_name << " copy contructor called!" << RESET << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap(){
    std::cout << GREY << "ClapTrap " << this->_name << " destroyed!" << RESET << std::endl;
    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
    if (this != &rhs)
		this->_name = rhs.getName();
        this->_hitPoints = rhs.getHitPoints();
        this->_attackDamage = rhs.getAttackDamage();
        this->_energyPoints = rhs.getEnergyPoints(); 
    return *this;   
}

void ClapTrap::setName(std::string name){
    this->_name= name;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage){
    std::cout << GREY << this->_name << " is boosted." << " Attack damage now is " << attackDamage << RESET << std::endl;
    this->_attackDamage = attackDamage;
}

std::string ClapTrap::getName() const{
    return (this->_name);
}

unsigned int ClapTrap::getHitPoints() const{
    // std::cout << GREY << this->_name << " hit points left : " << this->_hitPoints << RESET << std::endl;
    return (this->_hitPoints);
}

unsigned int ClapTrap::getAttackDamage() const{
    // std::cout << GREY << this->_name << " attack damage : " << this->_attackDamage << RESET << std::endl;
    return (this->_attackDamage);
}

unsigned int ClapTrap::getEnergyPoints() const{
    // std::cout << GREY << this->_name << " energy points left : " << this->_energyPoints << RESET << std::endl;
    return (this->_energyPoints);
}

void ClapTrap::attack(const std::string& target){
	if (!this->_energyPoints || !this->_hitPoints){
		std::cout << "ClapTrap " << this->_name << " has no " << (!this->_energyPoints ? "energy points" : "hit points") << ", so it cannot attack.." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damage!" << std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (!this->_energyPoints || !this->_hitPoints){
		std::cout << "ClapTrap " << this->_name << " has no " << (!this->_energyPoints ? "energy points" : "hit points") << ", so it cannot be repaired.." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " gets repaired for " << amount << " hit points!" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
}