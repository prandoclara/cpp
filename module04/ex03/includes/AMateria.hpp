/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:50:25 by claprand          #+#    #+#             */
/*   Updated: 2025/01/31 16:37:30 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#define GREY "\033[0;90m"
#define RED	"\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define WHITE "\033[0;97m"
#define ORANGE "\033[38;5;214m"
#define RESET   "\033[0m"

#include <string.h>
#include <iostream>
#include <iomanip>
#include "ICharacter.hpp"

class AMateria{
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const & cpy);
        virtual ~AMateria();

        AMateria & operator=(AMateria const & rhs);
        
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    protected:
        std::string _type;
};

#endif