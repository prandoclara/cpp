/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:51:56 by claprand          #+#    #+#             */
/*   Updated: 2025/01/15 12:54:20 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av){
    if (ac == 2){
        int	N = std::atoi(av[1]);
	    Zombie *horde = zombieHorde( N, "Zombie n°" );
	    for(int i = 0; i < N; ++i)
		    horde[i].announce();
	    delete [] horde;
    }
	else
		std::cout << "Please add a positive int as a parameter" << std::endl;
	return 0;
}