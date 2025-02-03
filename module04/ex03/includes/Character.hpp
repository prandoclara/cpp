/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:47:24 by claprand          #+#    #+#             */
/*   Updated: 2025/02/03 13:56:54 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

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
#include "ICharacter.hpp"

class Character : public ICharacter{
    public :
        Character();
        Character(std::string name);
        Character(Character const & cpy);
        ~Character();                                                                                    

        Character & operator=(Character const & rhs);
        
        std::string const & getName() const;
        unsigned int const & getIventorySize() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

    protected :
        std::string _name;
        AMateria* _inventory[4];
        unsigned int _inventorySize;
};

#endif