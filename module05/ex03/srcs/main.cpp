/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:02:58 by claprand          #+#    #+#             */
/*   Updated: 2025/02/06 12:10:18 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


// int	main( void ) {
	
// 	{
// 		Intern	Uk;
// 		Intern	testCpy(Uk);
// 		Intern	testEqual;

// 		testEqual = Uk;
// 	}
// 	std::cout << "----------------------------------------" << std::endl;
// 	{
// 		Intern		someRandomIntern;
// 		Bureaucrat	Alice("Alice", 1);
// 		AForm*		rrf;
// 		AForm*		a;
// 		AForm*		b;
// 		AForm*		c;

// 		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
// 		b = someRandomIntern.makeForm("shrubbery creation", "b");
// 		c = someRandomIntern.makeForm("presidential pardon", "c");

// 		std::cout << *rrf;
// 		std::cout << *b;
// 		std::cout << *c;

// 		Alice.signForm( *b );
// 		Alice.executeForm( *b );

// 		delete rrf;
// 		delete b;
// 		delete c;
		
// 		a = someRandomIntern.makeForm("robotomy ", "a");
// 	}
	
// 	return 0 ;
// }

int main() {
	Intern someRandomIntern;
	Bureaucrat boss("The Boss", 1);

	AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
	if (form1) {
		boss.signForm(*form1);
		boss.executeForm(*form1);
		delete form1;
	}
	try {
		AForm* form2 = someRandomIntern.makeForm("invalid form name", "Unknown");
		delete form2;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
