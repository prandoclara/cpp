/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:51:17 by claprand          #+#    #+#             */
/*   Updated: 2025/01/14 16:47:11 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <cctype>
# include <iomanip> 
# include <cstdlib>
# include <csignal>

class Zombie{
    public :
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );

    private :
        std::string _name;
};

#endif