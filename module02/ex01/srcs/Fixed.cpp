/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:26:40 by clara             #+#    #+#             */
/*   Updated: 2025/01/20 14:00:01 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _n(0){
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const int n){
    std::cout << "Parametric constructor called (int)" << std::endl;
    _n = n * (1 << _fractionalBits);
    return ;
}

Fixed::Fixed(const float f){
    std::cout << "Paramttric constructor called (float)" << std::endl;
    _n = roundf(f * (1 << _fractionalBits));
    return ;
}

Fixed::Fixed(Fixed const & src){
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
		this->_n = rhs.getRawBits();
    return *this;   
}


int Fixed::getValue() const{
    return (this->_n);
}

int Fixed::getRawBits(void ) const {
	return (this->_n);
}

void Fixed::setRawBits(int const raw) {
	this->_n = raw;
}

float Fixed::toFloat(void) const {
	return (float)_n / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
	return (_n >> _fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return (out);
}