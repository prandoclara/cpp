/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:24:31 by claprand          #+#    #+#             */
/*   Updated: 2025/02/03 20:24:47 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

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

class Bureaucrat{
    public :
        Bureaucrat();
        Bureaucrat(Bureaucrat const & cpy);
        ~Bureaucrat();

        Bureaucrat & operator=(Bureaucrat const & rhs);

        // Bureaucrat::GradeTooHighException
        // Bureaucrat::GradeTooLowException
        std::string const getName() const;
        int getGrade() const;
    
    private : 
        const std::string _name;
        int _grade;
};

std::ostream &	operator<<(std::ostream & os, Bureaucrat const & rhs);

#endif