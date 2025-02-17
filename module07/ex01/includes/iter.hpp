/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:47:19 by claprand          #+#    #+#             */
/*   Updated: 2025/02/14 11:59:04 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <stdint.h>
#include <ctime>

template< typename A, typename L, typename F>
void	iter( A * adress, L len, F function ) {
	for ( L i = 0; i < len; ++i)
		function( adress[i] ) ;
}

template< typename T >
void	toNeg( T & toNeg ) {
	if ( toNeg > 0 )
		toNeg *= - 1 ;
}

template< typename T >
void	print( T & item ) {
	std::cout << item << std::endl ;
}

#endif