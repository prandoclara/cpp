/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:57:08 by claprand          #+#    #+#             */
/*   Updated: 2025/02/17 16:10:45 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string & input) : _input(input) {
    if (!isExtensionValid(_input, ".txt")) 
		throw std::runtime_error("Wrong input extension.");
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & cpy) {*this = cpy ;}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs){
	if (this != &rhs){
		// _data = rhs._data;
		_input = rhs._input;
	}
	return *this;
}

bool BitcoinExchange::isExtensionValid(std::string const & file, std::string const & ext){
	if (file.length() >= ext.length())
		return file.substr(file.length() - ext.length()) == ext;
	return false;
}