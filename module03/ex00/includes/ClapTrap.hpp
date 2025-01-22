/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:14:07 by clara             #+#    #+#             */
/*   Updated: 2025/01/20 16:21:46 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClassTrap{
    public :
        Claptrap();
        Claptrap(std::string name);
        Claptrap(ClapTrap const & src);
        ~Claptrap();


        Fixed & operator=(Fixed const & rhs);
        void setName(std::string name);
        std::string getName() const;
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private :
        std::string _name;
        int _hitPoints = 10;
        int _energyPoints = 10;
        int _attackDamage = 0;
};

#endif