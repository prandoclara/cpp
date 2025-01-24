/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:43:14 by clara             #+#    #+#             */
/*   Updated: 2025/01/24 15:58:47 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    this->_name = "FragTrap Default Name";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << GREY << "FragTrap constructor called!" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name){
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << GREY << "FragTrap " << this->_name << " constructor!" << RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const & cpy) : ClapTrap(){
	std::cout << GREY << "FragTrap copy constructor called" << RESET << std::endl ;
    *this = cpy ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs){
	if (this != &rhs) {
		_name = rhs.getName() ;
		_hitPoints = rhs.getHitPoints() ;
		_energyPoints = rhs.getEnergyPoints() ;
		_attackDamage = rhs.getAttackDamage() ;
	}
	return *this ;
}

FragTrap::~FragTrap(){
    std::cout << GREY << "FragTrap destructor called " << _name << RESET << std::endl ;
}

void	FragTrap::highFivesGuys(void){
	if (!_hitPoints) {
		std::cout << "FragTrap " << getName() << " can't high five cause he/she is dead " << std::endl;
		return ;
	}
    std::cout << "FragTrap " << getName() << " is requesting a High Five :)" << std::endl; 
}
