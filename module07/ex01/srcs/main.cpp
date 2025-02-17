/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:47:47 by claprand          #+#    #+#             */
/*   Updated: 2025/02/11 11:50:14 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void ) {
	{
		std::string	array[] = {"Hello", "Bonjour", "Salut"};
		size_t		len = sizeof(array) / sizeof( array[0]);

		::iter(array, len, ::print<std::string>);
	}
	std::cout << "------------------------\n" ;
	{
		float			array[] = {3.14, 150.9999, 4242, 42.42};
		int				i = sizeof(array) / sizeof(array[0]);
		unsigned int	ui = i;

		::iter(array, i, ::toNeg<float>);
		::iter(array, ui, ::print<float>);
	}
	return 0;
}