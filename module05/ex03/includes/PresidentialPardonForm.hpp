/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:40:20 by claprand          #+#    #+#             */
/*   Updated: 2025/02/05 15:37:30 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

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
#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string & target);
        PresidentialPardonForm(PresidentialPardonForm const & cpy);
        virtual ~PresidentialPardonForm();

        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
        const std::string & getTarget() const;
    
    private : 
        std::string _target;
        static const int _gradeToSign = 25;
		static const int _gradeToExecute = 5;
        void	executeAction() const;
};

#endif