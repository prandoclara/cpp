/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:16:38 by mpeulet           #+#    #+#             */
/*   Updated: 2025/02/17 11:16:20 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(){
	// {
	// 	Span sp = Span(5);

	// 	sp.addNumber(6);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);

	// 	std::cout << sp << std::endl;
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// }
	// std::cout << "----------------------------------------\n";
	// {
	// 	Span sp = Span(5);

	// 	sp.addNumber(-8000);
	// 	sp.addNumber(-3);
	// 	sp.addNumber(-4);
	// 	sp.addNumber(-5);
	// 	sp.addNumber(1);

	// 	std::cout << sp << std::endl ;
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// }
	// std::cout << "----------------------------------------\n" ;
	// {
	// 	Span sp = Span(5);
	// 	Span sp1 = Span(50);

	// 	sp.addNumber(-8000);

	// 	std::cout << sp ;
	// 	std::cout << sp1 ;

	// 	try {
	// 		std::cout << sp.longestSpan() << std::endl;
	// 	}
	// 	catch ( std::exception & e ) {
	// 		std::cout << e.what() << std::endl ;
	// 	}
	// 	try {
	// 		std::cout << sp1.longestSpan() << std::endl;
	// 	}
	// 	catch ( std::exception & e ) {
	// 		std::cout << e.what() << std::endl ;
	// 	}
	// }
	// std::cout << "----------------------------------------\n" ;
	std::cout << "----------------------------------------\n" ;
	{
		Span	sp( 50 ) ;
		Span	sp1( 50 ) ;
		Span	sp2( 50 ) ;

		std::vector<int>	vec(50, 42) ;
		std::vector<int>	vec1;
    	for (int i = 1; i <= 24; ++i) {
        	vec1.push_back(i * 2);
		}

		sp.addRange( vec.begin(), vec.end() ) ;
		sp1.addNumber( 43 ) ;
		sp1.addNumber( 50 ) ;
		try {
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl ;
		}
		try {
			std::cout << sp1.shortestSpan() << std::endl;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl ;
		}
		sp1.addRange( vec1.begin(), vec1.end() ) ;
		std::cout << sp1 << std::endl ;
		try {
			std::cout << sp1.shortestSpan() << std::endl;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl ;
		}
		sp2.addNumber( 42 ) ;
		try {
			std::cout << sp2.shortestSpan() << std::endl;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl ;
		}
	}

	return 0 ;
}
