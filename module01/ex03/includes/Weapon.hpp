/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:45:08 by claprand          #+#    #+#             */
/*   Updated: 2025/01/15 15:05:41 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>
# include <cstdlib>
# include <sstream>

class Weapon{
    public : 
        Weapon();
        Weapon(const std::string& type);
        ~Weapon();

        void setType(std::string type);
		std::string getType(void) const;
    
    private :
        std::string _type;
};

#endif