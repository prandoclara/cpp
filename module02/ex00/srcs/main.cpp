/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:24:46 by clara             #+#    #+#             */
/*   Updated: 2025/01/28 11:11:30 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;

std::cout << "a getRawBits : " << a.getRawBits() << std::endl;
a.setRawBits(10);
std::cout << "a after setRawBits : " << a.getRawBits() << std::endl;
std::cout << "b getRawBits : " << b.getRawBits() << std::endl;
b.setRawBits(20);
std::cout << "b after setRaWBits : " << b.getRawBits() << std::endl;
std::cout << "c getRawBits : " << c.getRawBits() << std::endl;
c.setRawBits(30);
std::cout << "c after setRawBits : " << c.getRawBits() << std::endl;




return 0;
}