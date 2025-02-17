/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:48:29 by claprand          #+#    #+#             */
/*   Updated: 2025/02/10 20:58:51 by clara            ###   ########.fr       */
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
#include <sstream>

class ScalarConverter{
    public :
        static void convert(const std::string & s);
    
    private :
        ScalarConverter();
        ScalarConverter(ScalarConverter const & cpy);
        ~ScalarConverter();
        ScalarConverter & operator=(ScalarConverter const & rhs);
        
        static bool IsInt(const std::string & s);
        static bool IsDouble(const std::string & s);
        static bool IsFloat(const std::string & s);
        static bool IsChar(const std::string & s);
        static void printInt(double value);
        static void printDouble(double value);
        static void printFloat(double value);
        static void printChar(double value);
};

#endif 