/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:48:29 by claprand          #+#    #+#             */
/*   Updated: 2025/02/06 16:05:50 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

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

class AScalarConverter{
    public :
        static void convert(const std::string & s);
    
    private :
        AScalarConverter();
        AScalarConverter(AScalarConverter const & cpy);
        ~AScalarConverter();
        AScalarConverter & operator=(AScalarConverter const & rhs);
        
        bool IsInt(const std::string & s);
        bool IsDouble(const std::string & s);
        bool IsFloat(const std::string & s);
        bool IsChar(const std::string & s);
        void printInt(double value);
        void printDouble(double value);
        void printFloat(double value);
        void printChar(double value);
}

#endif 