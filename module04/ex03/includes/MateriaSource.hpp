/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:26:39 by claprand          #+#    #+#             */
/*   Updated: 2025/02/03 14:34:02 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

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
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
    public:
        MateriaSource();
        MateriaSource(std::string const & type);
        MateriaSource(MateriaSource const & cpy);
        virtual ~MateriaSource();

        MateriaSource & operator=(MateriaSource const & rhs);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        std::string const & getType() const;
        unsigned int const & getSize() const;

    protected:
        std::string _type;
        AMateria* _stored[4];
        unsigned int _size;
};

#endif