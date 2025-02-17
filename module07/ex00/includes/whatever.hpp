/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:41:24 by claprand          #+#    #+#             */
/*   Updated: 2025/02/11 11:44:41 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template< typename T >
void	swap( T & x, T & y ) {
	T	tmp = x ;
	x = y ;
	y = tmp ;
}

template< typename T >
T const &	max( T const & x, T const & y ) {
	return x > y ? x : y ;	
}

template< typename T >
T const &	min( T const & x, T const & y ) {
	return x < y ? x : y ;	
}

#endif