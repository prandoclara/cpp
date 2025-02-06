/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:31:20 by claprand          #+#    #+#             */
/*   Updated: 2025/02/06 11:52:42 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

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
#include <limits.h>
#include "AForm.hpp"

class Intern{
    public :
        Intern();
        Intern(Intern const & cpy);
        ~Intern();

        Intern & operator=(Intern const & rhs);
        AForm *	makeForm(const std::string & formName, const std::string & target);

        class unknownForm : public std::exception{
            public :
                virtual const char * what() const throw(){
                    return "Intern does not recognize this form.\n";
                }
        };
};

#endif