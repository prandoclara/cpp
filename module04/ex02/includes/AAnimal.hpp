/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:32:20 by claprand          #+#    #+#             */
/*   Updated: 2025/01/31 11:33:54 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

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

class AAnimal{
    public : 
        AAnimal();
        AAnimal(std::string type);
        AAnimal(AAnimal const & cpy);
        virtual ~AAnimal();

        AAnimal & operator=(AAnimal const & rhs);
        std::string getType() const;
        void setType(std::string);
        virtual void makeSound() const = 0;
    
    protected :
        std::string _type;
        std::string _sound;
};

#endif