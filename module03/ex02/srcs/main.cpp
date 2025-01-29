/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:26:14 by clara             #+#    #+#             */
/*   Updated: 2025/01/29 11:26:28 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void){

	ClapTrap	Alice("Alice");
	std::cout << std::endl;
	ScavTrap	Bob("Bob");
	std::cout << std::endl;
	FragTrap	Charly("Charly");
	std::cout << std::endl;

	Charly.highFivesGuys();
	Charly.takeDamage(1000);
	Charly.highFivesGuys();
	std::cout << std::endl;
	return 0;
}
