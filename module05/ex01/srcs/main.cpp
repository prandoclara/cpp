/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:02:58 by claprand          #+#    #+#             */
/*   Updated: 2025/02/05 13:13:34 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void ) {
	{
		Form	A;
		std::cout << A ;
		Form	B("B", 5, 3);
		std::cout << B ;
		Form	C(B);
		std::cout << C ;
		Form	D("D", 150, 150);
		D = B;
		std::cout << D ;
	}
	std::cout << "-------------------------\n" ;
	{
		Bureaucrat	Alice("Alice", 10);
		Form		A("A", 11, 1);
		A.beSigned(Alice);
		std::cout << A ;

		Form	B(A);
		std::cout << B ;
		B.beSigned(Alice) ;
		std::cout << B ;
		
		Bureaucrat	Bob("Bob", 1);
		B.beSigned(Bob) ;
		std::cout << B ;
	}
	std::cout << "-------------------------\n" ;
	{
		Form		A("A", 0, 42) ;
		Form		B("B", 25, 165) ;
		Form		C("C", 1, 1);
		Bureaucrat	Alice("Alice", 2);

		C.beSigned(Alice) ;
		std::cout << C ;
		++Alice;
		C.beSigned(Alice) ;
		std::cout << C ;
	}
	std::cout << "-------------------------\n" ;
	{
		Bureaucrat	Alice("Alice", 5);
		Form		A("A", 2, 2);
		Form		B("B", 5, 2);
		
		Alice.signForm(A) ;
		Alice.signForm(B) ;
		Alice.signForm(B) ;
	}
	
	return 0 ;
}
