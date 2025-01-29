/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:07:49 by clara             #+#    #+#             */
/*   Updated: 2025/01/29 11:45:51 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap(){
    this->_name = "DiamondTrap Default Name";
    this->_hitPoints = 100;
    this->_attackDamage = 30;
    std::cout << GREY << "DiamondTrap default constructor called!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name),  _name(name){
    this->_hitPoints = 100;
    this->_attackDamage = 30;
    std::cout << GREY << "DiamondTrap " << this->_name << " constructor!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & cpy) : ClapTrap(), FragTrap(), ScavTrap(){
	std::cout << GREY << "DiamondTrap copy constructor called" << RESET << std::endl ;
    *this = cpy ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs){
	if (this != &rhs) {
		_name = rhs.getName() ;
		_hitPoints = rhs.getHitPoints() ;
		_energyPoints = rhs.getEnergyPoints() ;
		_attackDamage = rhs.getAttackDamage() ;
	}
	return *this ;
}

DiamondTrap::~DiamondTrap(){
    std::cout << GREY << "DiamondTrap " << _name << " destroyed!" << RESET << std::endl ;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "---------------\n" ;
	std::cout << "DiamondTrap " << _name << std::endl ;
	std::cout << "---------------\n" ;
	std::cout << ClapTrap::_name << std::endl ;
	std::cout << "---------------\n" ;
}
