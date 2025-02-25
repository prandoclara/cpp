/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:51:17 by claprand          #+#    #+#             */
/*   Updated: 2025/01/15 10:47:13 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie{
    public :
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);

    private :
        std::string _name;
};

    Zombie* newZombie(std::string name);
    void randomChump(std::string name);

#endif