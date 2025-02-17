/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:30:53 by claprand          #+#    #+#             */
/*   Updated: 2025/02/13 11:42:30 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

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

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <stdint.h>

typedef struct Data {
	char		c;
	std::string	s;
	int			n;
} Data ;

class Serializer{
    public : 
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

    private : 
        Serializer();
        Serializer(Serializer const & cpy);
        ~Serializer();
        Serializer & operator=(Serializer const & rhs);
};

#endif