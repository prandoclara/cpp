/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:46:36 by claprand          #+#    #+#             */
/*   Updated: 2025/01/30 11:47:01 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

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

class WrongAnimal{
    public : 
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const & cpy);
        ~WrongAnimal();

        WrongAnimal & operator=(WrongAnimal const & rhs);
        std::string getType() const;
        void setType(std::string);
        void makeSound() const;
    
    protected :
        std::string _type;
        std::string _sound;
};

#endif