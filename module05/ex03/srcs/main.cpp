/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:02:58 by claprand          #+#    #+#             */
/*   Updated: 2025/02/10 13:58:59 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main( void ) {
	{
		Intern		someRandomIntern;
		Bureaucrat	Alice("Alice", 1);
		AForm*		rrf;
		AForm*		a;
		AForm*		b;
		AForm*		c;
		std::cout << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << std::endl;
		a = someRandomIntern.makeForm("robotomy ", "a");
		std::cout << std::endl;
		b = someRandomIntern.makeForm("shrubbery creation", "b");
		std::cout << std::endl;
		c = someRandomIntern.makeForm("presidential pardon", "c");
		std::cout << std::endl;

		std::cout << *rrf;
		std::cout << *b;
		std::cout << *c;

		Alice.signForm( *b );
		Alice.executeForm( *b );

		delete rrf;
		delete b;
		delete c;
	}
	return 0 ;
}
