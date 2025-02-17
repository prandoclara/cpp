/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:28:16 by claprand          #+#    #+#             */
/*   Updated: 2025/02/17 16:15:05 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <iomanip>

class BitcoinExchange {
    public :
        BitcoinExchange();
        BitcoinExchange(std::string & input);
        BitcoinExchange(BitcoinExchange const & cpy);
        ~BitcoinExchange();
        BitcoinExchange & operator=(BitcoinExchange const & rhs);

        bool isExtensionValid(std::string const & file, std::string const & ext);
        
    private : 
        std::string _input;
};

#endif