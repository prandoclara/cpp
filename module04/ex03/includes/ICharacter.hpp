/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:19:57 by claprand          #+#    #+#             */
/*   Updated: 2025/01/31 16:55:01 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

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
#include "AMateria.hpp"

class ICharacter{
    public : 
        ICharacter();
        ICharacter(std::string name);
        ICharacter(ICharacter const & cpy);
        virtual ~ICharacter();

        ICharacter & operator=(ICharacter const & rhs);
        virtual std::string const & getName() const = 0;
        // virtual void equip(AMateria * m) = 0;
        // virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter & target) = 0;
        std::string const & getIventorySize() const;
        
    protected :
        std::string _name;
        // AMateria* _inventory[4];
        unsigned int _inventorySize;
};

#endif