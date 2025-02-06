/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:06:05 by claprand          #+#    #+#             */
/*   Updated: 2025/02/06 16:09:01 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
    
AScalarConverter::AScalarConverter() {}

AScalarConverter::AScalarConverter(AScalarConverter const & cpy){
    *this = cpy;
}

AScalarConverter::~AScalarConverter() {}

AScalarConverter & AScalarConverter::operator=(AScalarConverter const & rhs){
    (void)rhs;
    return *this;
}

void AScalarConverter::convert(const std::string & s){
    
}
        
bool IsInt(const std::string & s){
    
}

bool IsDouble(const std::string & s){

}

bool IsFloat(const std::string & s){
    
}

bool IsChar(const std::string & s){

}

void printInt(double value){

}

void printDouble(double value){

}

void printFloat(double value){
    
}

void printChar(double value){
    
}