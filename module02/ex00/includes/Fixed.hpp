/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:26:26 by clara             #+#    #+#             */
/*   Updated: 2025/01/20 12:01:16 by clara            ###   ########.fr       */
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
        Fixed(Fixed const & src);
        ~Fixed();

        Fixed & operator=(Fixed const & rhs);
        int getValue() const;
        int getRawBits(void ) const;
        void setRawBits(int const raw);
    
    private : 
        int _n;
        static const int	_fractionalBits = 8;
};

#endif