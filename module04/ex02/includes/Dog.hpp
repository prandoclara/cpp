/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:17:00 by claprand          #+#    #+#             */
/*   Updated: 2025/01/29 14:38:21 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#define GREY "\033[0;90m"
#define RED	"\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define WHITE "\033[0;97m"
#define ORANGE "\033[38;5;214m"
#define RESET   "\033[0m"

#include <string.h>
#include <iostream>
#include <iomanip>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
    public : 
        Dog();
        Dog(std::string type);
        Dog(Dog const & cpy);
        ~Dog();

        Dog & operator=(Dog const & rhs);
        void makeSound() const;
        Brain *getBrain() const;
    
    private : 
        Brain* _dogBrain;
};

#endif