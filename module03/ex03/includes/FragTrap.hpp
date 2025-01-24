/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:43:32 by clara             #+#    #+#             */
/*   Updated: 2025/01/24 17:29:57 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const & cpy);
        ~FragTrap();
        FragTrap & operator=(FragTrap const & rhs);

        void highFivesGuys(void);
};

#endif