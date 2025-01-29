/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:53:54 by claprand          #+#    #+#             */
/*   Updated: 2025/01/27 10:52:41 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include <iostream>
# include <cstdlib>
# include <sstream>
# include "Weapon.hpp"

#define DEF_COLOR "\033[0;39m";
#define GREY "\033[0;90m";
#define RED "\033[0;91m";
#define GREEN "\033[0;92m";
#define YELLOW "\033[0;93m";
#define BLUE "\033[0;94m";
#define MAGENTA "\033[0;95m";
#define CYAN "\033[0;96m";
#define WHITE "\033[0;97m";
#define ORANGE "\033[38;5;214m";
#define RESET   "\033[0m"

class HumanB{
    public :
        HumanB(const std::string& name);
        ~HumanB();
        void setName(std::string type);
		std::string getName(void) const;
        void attack() const;
        void setWeapon(const Weapon &newWeapon);
        
    private :
        std::string _name;
        Weapon const *_weapon;
};

#endif