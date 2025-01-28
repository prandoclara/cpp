/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:26:26 by clara             #+#    #+#             */
/*   Updated: 2025/01/28 11:14:54 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <string>
#include <iostream>
#include <iomanip>

class Fixed{
    public :
        Fixed();
        Fixed(Fixed const & cpy);
        ~Fixed();

        Fixed & operator=(Fixed const & rhs);
        int getRawBits(void ) const;
        void setRawBits(int const raw);
    
    private : 
        int _n;
        static const int	_bits = 8;
};

#endif