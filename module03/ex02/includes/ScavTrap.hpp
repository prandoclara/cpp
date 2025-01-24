/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:39:38 by clara             #+#    #+#             */
/*   Updated: 2025/01/24 15:40:22 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & cpy);
        ~ScavTrap();
        ScavTrap & operator=(ScavTrap const & rhs);

        void	attack(const std::string & target);
        void	guardGate(void);
};

#endif