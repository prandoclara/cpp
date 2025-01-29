/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:53:17 by claprand          #+#    #+#             */
/*   Updated: 2025/01/27 10:43:02 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

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

# include <string>
# include <iostream>
# include <cstdlib>
# include <sstream>
# include "Weapon.hpp"

class HumanA{
    public :
        HumanA();
        HumanA(const std::string & name, Weapon & weapon);
        ~HumanA();
        void setName(std::string type);
		std::string getName(void) const;
        void attack() const;
    
    private :
        std::string _name;
        Weapon & _weapon;
};

#endif