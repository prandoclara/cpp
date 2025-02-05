/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:02:58 by claprand          #+#    #+#             */
/*   Updated: 2025/02/05 15:52:07 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main( void ) {
	
	{
		Bureaucrat				Alice("Alice", 150);
		ShrubberyCreationForm	Shrub("Here");

		std::cout << Shrub;
		std::cout << Shrub.getTarget();
		Alice.executeForm(Shrub);
		Alice.incrementGrade(50);
		std::cout << Alice;
		Alice.executeForm(Shrub);
		Alice.signForm(Shrub);
		Alice.executeForm(Shrub);
	}
	std::cout << "-------------------------\n" ;
	{
		Bureaucrat			Bob("Bob", 50);
		RobotomyRequestForm	Robotomy("Charlie");
		RobotomyRequestForm	testCpy(Robotomy);
		RobotomyRequestForm	testEqual;

		std::cout << testEqual;
		testEqual = Robotomy;
		std::cout << testEqual.getTarget() << std::endl;
		Robotomy.beSigned(Bob);
		Bob.decrementGrade(1000);
		std::cout << Bob;
		Bob.executeForm(Robotomy);
		Bob.incrementGrade(1000);
		std::cout << Bob;
		Bob.executeForm(Robotomy);
		Bob.executeForm(Robotomy);
		Bob.executeForm(Robotomy);
		Bob.executeForm(Robotomy);
		Bob.executeForm(Robotomy);
	}
	std::cout << "-------------------------\n" ;
	{
		Bureaucrat				David("David", 25);
		Bureaucrat				Eric("Eric", 5);
		PresidentialPardonForm	Presidential("Guilty person");

		std::cout << Presidential;
		Presidential.beSigned(David);
		std::cout << Presidential;
		Eric.executeForm(Presidential);
	}	
	return 0;
}
