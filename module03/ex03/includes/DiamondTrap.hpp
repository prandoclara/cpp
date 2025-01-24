/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:08:04 by clara             #+#    #+#             */
/*   Updated: 2025/01/24 17:20:36 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
    public : 
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const & cpy);
        ~DiamondTrap();
        DiamondTrap & operator=(DiamondTrap const & rhs);

        using	ScavTrap::attack;
        void	whoAmI(void);

    private : 
        std::string _name;
};

#endif