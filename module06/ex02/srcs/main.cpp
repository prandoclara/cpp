/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:04:56 by claprand          #+#    #+#             */
/*   Updated: 2025/02/11 11:23:14 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functions.hpp"

class D : public Base {};

int	main( void ) {

	Base * base = generate() ;
    Base * testD = new D ;

	identify(base);
	std::cout << "-------------------\n";
	identify(*base) ;
	std::cout << "-------------------\n";
	identify(testD);
	std::cout << "-------------------\n";
	identify(*testD);

	delete base;
	delete testD;
	return 0;
}