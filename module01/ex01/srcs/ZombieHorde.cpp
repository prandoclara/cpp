/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:01:37 by claprand          #+#    #+#             */
/*   Updated: 2025/01/15 12:59:41 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string intToString(int value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

Zombie* zombieHorde(int N, std::string name){
    if (N <= 0){
        std::cout << "Please use a positive number" << std::endl;
        return NULL;
    }
    Zombie *horde = new Zombie[N];
    if (!horde){
        std::cerr << "horde allocating memory error" << std::endl;
        return NULL;
    }
    for (int i = 0; i < N; i++){
        
        horde[i].setName(name + " " + intToString(i + 1));
    }
    return (horde);
}