/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:06:05 by claprand          #+#    #+#             */
/*   Updated: 2025/02/13 15:24:32 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const & cpy){
    *this = cpy;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs){
    (void)rhs;
    return *this;
}

void ScalarConverter::convert(const std::string & s){
    double value;

    if (s.length() == 1 && !std::isdigit(s[0])) {
        value = static_cast<double>(s[0]);
    }
    else if (s == "nanf" || s == "nan")
        value = std::numeric_limits<double>::quiet_NaN();
    else if (s == "inff" || s == "inf" || s == "+inf" || s == "+inff")
        value = std::numeric_limits<double>::infinity();
    else if (s == "-inff" || s == "-inf")
        value = -std::numeric_limits<double>::infinity();
    else if (s.length() > 1 && s[s.length() - 1] == 'f' && IsFloat(s)) {
        std::string temp = s.substr(0, s.length() - 1);
        std::stringstream ss(temp);
        ss >> value;
        if (ss.fail() || !ss.eof()) {
            std::cout << "Conversion failed!" << std::endl;
            return;
        }
    }
    else {
        std::stringstream ss(s);
        ss >> value;
        if (ss.fail() || !ss.eof()) {
            std::cout << "Conversion failed!" << std::endl;
            return;
        }
    }
    printChar(value);
    printInt(value);
    printFloat(value);
    printDouble(value);
}

bool ScalarConverter::IsInt(const std::string & s){
	char *end;
	long val;

	val = std::strtol(s.c_str(), &end, 10);
	return (*end == '\0' && val >=std::numeric_limits<int>::min() && val <=std::numeric_limits<int>::max());
}

bool ScalarConverter::IsFloat(const std::string & s) {
    if (s == "nanf" || s == "inff" || s == "+inff" || s == "-inff")
        return true;
    if (s.length() > 1 && s[s.length() - 1] == 'f') {
        std::string temp = s.substr(0, s.length() - 1);
        char *end;
        std::strtod(temp.c_str(), &end);
        return (*end == '\0');
    }
    return false;
}

bool ScalarConverter::IsDouble(const std::string & s) {
    if (s == "nan" || s == "inf" || s == "+inf" || s == "-inf")
        return true;
    char *end;
    std::strtod(s.c_str(), &end);
    return (*end == '\0');
}


bool ScalarConverter::IsChar(const std::string & s) {
    return (s.length() == 1 && std::isprint(s[0]) && !std::isdigit(s[0]));
}


void ScalarConverter::printInt(double value){
	if (std::isnan(value) || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

void ScalarConverter::printDouble(double value){
    std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
}

void ScalarConverter::printFloat(double value){
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
}

void ScalarConverter::printChar(double value){
	if (std::isnan(value) || value < 0 || value > 127)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(static_cast<int>(value)))
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
}

