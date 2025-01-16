/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:09:12 by claprand          #+#    #+#             */
/*   Updated: 2025/01/16 12:00:34 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
    return;
}

Harl::~Harl(){
    return;
}

void Harl::_debug(){
    std::cout << CYAN << "[DEBUG]" << RESET << std::endl << DEBUG << std::endl;
}

void Harl::_info(){
    std::cout << MAGENTA << "[INFO]" << RESET << std::endl << INFO << std::endl;

}

void Harl::_warning(){
    std::cout << YELLOW << "[WARNING]" << std::endl << RESET << WARNING << std::endl;
}

void Harl::_error(){
    std::cout << RED << "[ERROR]" << std::endl << RESET << ERROR << std::endl;
}

void Harl::complain(std::string level){
    std::string validLevel[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptr[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

    for (int i = 0; i < 4; i++){
        if (level == validLevel[i]){
            (this->*ptr[i])();
            return;
        }
    }
    std::cout << BLUE << "[UNKNOWN]" << std::endl << RESET << UNKNOWN << std::endl;
}

void Harl::complainLevels(std::string level){
    std::string validLevel[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptr[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    int index = -1;

    for (int i = 0; i < 4; i++){
        if (level == validLevel[i]){
            index = i;
            break ;
        }
    }
    switch (index){
        case 0:
            (this->*ptr[0])();
        case 1:
            (this->*ptr[1])();
        case 2:
            (this->*ptr[2])();
        case 3:
            (this->*ptr[3])();
            break ;
        default: std::cout << BLUE << "[UNKNOWN]" << std::endl << RESET << UNKNOWN << std::endl;
    }
    
}

