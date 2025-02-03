/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:50:57 by claprand          #+#    #+#             */
/*   Updated: 2025/02/03 22:05:10 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

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
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public : 
        WrongCat();
        WrongCat(std::string type); 
        WrongCat(WrongCat const & cpy);
        ~WrongCat();

        WrongCat & operator=(WrongCat const & rhs);
        // void makeSound() const;
};

#endif