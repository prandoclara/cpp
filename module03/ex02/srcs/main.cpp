/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:26:14 by clara             #+#    #+#             */
/*   Updated: 2025/01/24 15:54:27 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void){

	ClapTrap	Alice("Alice");
	ScavTrap	Bob("Bob");
	FragTrap	Charly("Charly");

	Charly.highFivesGuys();
	Charly.takeDamage(1000);
	Charly.highFivesGuys();
	return 0;
}
