/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:24:31 by claprand          #+#    #+#             */
/*   Updated: 2025/02/05 11:25:58 by claprand         ###   ########.fr       */
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
#include <limits.h>
#include "Form.hpp"

class Form;

class Bureaucrat{
    public :
        Bureaucrat();
        Bureaucrat(std::string name, unsigned int grade);
        Bureaucrat(Bureaucrat const & cpy);
        ~Bureaucrat();

        Bureaucrat & operator=(Bureaucrat const & rhs);
        std::string const getName() const;
        int getGrade() const;
        void setGrade(int grade);
        void incrementGrade(int promotion);
        void decrementGrade(int sack);
        Bureaucrat & operator++();
        Bureaucrat & operator--();
        void signForm(Form & form);

        class GradeTooHighException : public std::exception{
            public :
                virtual const char * what() const throw(){
                    return "Bureaucrat grade can't rank higher than 1.\n";
                }
        };
        
        class GradeTooLowException : public std::exception{
            public :
                virtual const char * what() const throw(){
                    return "Bureaucrat grade can't rank lower than 150.\n";
                }
        };
    
    private : 
        const std::string _name;
        unsigned int _grade;
        static const int _lowestGrade = 150;
        static const int _highestGrade = 1;
};

std::ostream &	operator<<(std::ostream & os, Bureaucrat const & rhs);

#endif