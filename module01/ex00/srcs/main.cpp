/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:51:56 by claprand          #+#    #+#             */
/*   Updated: 2025/01/15 10:51:48 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie *FirstZombie = newZombie("Alice");
    Zombie *SecondZombie = newZombie("Bernard");

    FirstZombie->announce();
    SecondZombie->announce();
    randomChump("George");
    delete(FirstZombie);
    delete(SecondZombie);
}