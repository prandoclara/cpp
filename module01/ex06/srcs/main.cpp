/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:59:09 by claprand          #+#    #+#             */
/*   Updated: 2025/01/16 11:59:50 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
    Harl Harl;
    if (ac != 2 || !av || !av[1]){
        std::cout << BLUE << "[UNKNOWN]" << RESET << std::endl << UNKNOWN << std::endl;
        return (1);
    }
    Harl.complainLevels(av[1]);
    return (0);
}