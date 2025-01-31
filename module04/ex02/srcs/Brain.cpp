/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:05:51 by claprand          #+#    #+#             */
/*   Updated: 2025/01/31 11:18:59 by claprand         ###   ########.fr       */
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

const std::string & Brain::getIdeas(unsigned int index) const{
    if (index >= 100){
        std::cerr << "Wrong index number." << std::endl;
        return _ideas[0];
    }
    return _ideas[index];
}

bool Brain::setIdeas(unsigned int index, std::string const & idea){
	if (index >= 100){
		std::cerr << "Wrong index number." << std::endl;
		return false;
	}
	_ideas[index] = idea;
	return true;
}