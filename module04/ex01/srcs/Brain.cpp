/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:05:51 by claprand          #+#    #+#             */
/*   Updated: 2025/01/30 15:50:19 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << CYAN << "Brain :  Default constructor called!" << RESET << std::endl;
    return;
}

Brain::Brain(Brain const & cpy){
    std::cout << CYAN << "Brain : Copy constructor called!"  << RESET << std::endl;
    *this = cpy;
}

Brain::~Brain(){
    std::cout << CYAN << "Brain : Deconstructor called!"  << RESET << std::endl;
    return ;
}

Brain & Brain::operator=(Brain const & rhs){
    for (int i =  0; i < 100; i++){
        this->_ideas[i] = rhs._ideas[i];
    }
    return *this;
}
