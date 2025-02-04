/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:05:08 by claprand          #+#    #+#             */
/*   Updated: 2025/02/04 11:16:08 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

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

class Brain{
    public : 
        Brain();
        Brain(Brain const & cpy);
        virtual ~Brain();

        Brain & operator=(Brain const & rhs);
        const std::string & getIdeas(unsigned int index) const;
        bool setIdeas(unsigned int index, std::string const & ideas);
    
    protected :
        std::string _ideas[100];
};

#endif