/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:37:20 by claprand          #+#    #+#             */
/*   Updated: 2025/02/05 13:23:50 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

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
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    public :
        Form();
        Form(const std::string & name, int toSign, int toExecute);
        Form(Form const & cpy);
        ~Form();

        Form & operator=(Form const & rhs);
        std::string const getName() const;
        const std::string &	getSignedBy(void) const;
        bool getSigned( void ) const;
		int getToSign( void ) const;
		int getToExecute( void ) const;
        void beSigned(Bureaucrat const & bureaucrat);
        void setSigned(bool iSigned);
        
        class GradeTooHighException : public std::exception{
            public :
                virtual const char * what() const throw(){
                    return "Form requires a higher grade to be used.\n";
                }
        };
        
        class GradeTooLowException : public std::exception{
            public :
                virtual const char * what() const throw(){
                    return "Form requires a lower grade to be used.\n";
                }
        };

        class FormIsAlreadySigned : public std::exception{
            public :
                virtual const char * what() const throw(){
                    return "Form is already signed.\n";
                }
        };

    private :
        const std::string _name;
        std::string _signedBy;
        bool _signed;
        int _toSign;
        int _toExecute;
};

std::ostream & operator<<(std::ostream & os, Form const & rhs);

#endif