/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:51:17 by claprand          #+#    #+#             */
/*   Updated: 2025/01/15 12:59:24 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <cstdlib>
# include <sstream>

class Zombie{
    public :
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
        std::string getName() const;
        void setName(std::string name);

    private :
        std::string _name;
};

    Zombie* zombieHorde(int N, std::string name);
    std::string intToString(int value);

#endif