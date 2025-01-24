/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:14:07 by clara             #+#    #+#             */
/*   Updated: 2025/01/24 17:27:05 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

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
#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>

class ClapTrap{
    public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & cpy);
        ~ClapTrap();


        ClapTrap & operator=(ClapTrap const & rhs);
        void setName(std::string name);
        void setAttackDamage(unsigned int attackDamage);
        void setHitPoints(unsigned int hitPoints);
        void setEnergyPoints(unsigned int energyPoints);
        std::string getName() const;
        unsigned int getAttackDamage() const;
        unsigned int getHitPoints() const;
        unsigned int getEnergyPoints() const;
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected :
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
};

#endif