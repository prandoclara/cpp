/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:26:26 by clara             #+#    #+#             */
/*   Updated: 2025/01/28 13:35:19 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

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

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>

class Fixed{
    public :
        Fixed();
        Fixed(const int n);
        Fixed(const float f);
        Fixed(Fixed const & cpy);
        ~Fixed();

        Fixed & operator=(Fixed const & rhs);
        int getRawBits(void ) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
	    int toInt(void) const;

        bool operator>(Fixed const & rhs) const;
        bool operator<(Fixed const & rhs) const;
        bool operator<=(Fixed const & rhs) const;
        bool operator>=(Fixed const & rhs) const; 
        bool operator==(Fixed const & rhs) const;
        bool operator!=(Fixed const & rhs) const;

        Fixed operator+(Fixed const & rhs) const;
        Fixed operator-(Fixed const & rhs) const;
        Fixed operator/(Fixed const & rhs) const;
        Fixed operator*(Fixed const & rhs) const;

        Fixed & operator++();
        Fixed & operator--();
        Fixed operator--(int);
        Fixed operator++(int);

        static Fixed & min(Fixed & a, Fixed & b);
        static Fixed & max(Fixed & a, Fixed & b);
        static const Fixed & min(const Fixed & a, const Fixed & b);
        static const Fixed & max(const Fixed & a, const Fixed & b);
    
    private : 
        int _n;
        static const int _bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif