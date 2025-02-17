/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:01:40 by claprand          #+#    #+#             */
/*   Updated: 2025/02/13 11:49:25 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functions.hpp"

Base *	generate( void ) {
	std::srand(static_cast<unsigned int>(std::time(0)));
	int random = std::rand() % 3;
	switch (random){
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL; 
}

void identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << GREEN << "Class is a A type class." << RESET << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << GREEN << "Class is a B type class." << RESET << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << GREEN << "Class is a C type class." << RESET << std::endl;
    else 
        std::cout << RED << "Class unknown" << RESET << std::endl;
}

void identify(Base& p){
	try {
		A & a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << GREEN << "Class is a A type class." << RESET << std::endl;
		return;
	}
	catch (std::exception & e){
		std::cout << RED << "Class is not a type A. " << e.what() << RESET << std::endl;
	}
	try {
		B & b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << GREEN << "Class is a B type class." << RESET << std::endl;
		return;
	}
	catch (std::exception & e){
		std::cout << RED << "Class is not a type B. " << e.what() << RESET << std::endl;
	}
	try {
		C & c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << GREEN << "Class is a C type class." << RESET << std::endl;
		return;
	}
	catch (std::exception & e){
		std::cout << RED << "Class is not a type C. " << e.what() << RESET << std::endl;
	}
	std::cout << RED << "Class unknown." << RESET << std::endl;
} 
