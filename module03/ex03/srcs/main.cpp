/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:26:14 by clara             #+#    #+#             */
/*   Updated: 2025/01/29 11:51:36 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void){
	{
		std::string	target = "Random target";
		DiamondTrap	a("Alice");

		a.whoAmI();
		a.attack(target);
		a.takeDamage(150);
		a.attack(target);
	}
	std::cout << "\n*************************************\n";
	{
		std::string	target = "Random target";
		DiamondTrap	b;
		
		b.whoAmI() ;
		b.attack(target);
		b.takeDamage(99);
		b.takeDamage(1);
		b.attack(target);
	}
	std::cout << "\n*************************************\n";
	{
		std::string	target = "Random target";
		DiamondTrap	c("Charly");

		c.guardGate();
		c.highFivesGuys();
	}
	return 0;
}

