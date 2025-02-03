/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:16:36 by claprand          #+#    #+#             */
/*   Updated: 2025/01/31 14:05:36 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    int size = 6;
    Animal *array_of_animals[size];

    for (int i = 0; i < size / 2; i++){
        array_of_animals[i] = new Dog;
        std::cout << std::endl;
    }

    for (int i = size / 2; i < size; i++){
        array_of_animals[i] = new Cat;
        std::cout << std::endl;
    }

    for (int i = 0; i < size; i++){
        array_of_animals[i]->makeSound();
        std::cout << std::endl;
    }

    for (int i = 0; i < size; i++){
        delete array_of_animals[i];
    }
    std::cout << "--------------------------------------\n" ;
    Cat kitty;
	kitty.makeSound() ;
	kitty.getBrain()->setIdeas(0, "Food");
	{
		Cat kitty2 = kitty;
        kitty2.getBrain()->setIdeas(0, "Play");
		std::cout << kitty2.getBrain()->getIdeas(0) << std::endl ;
		std::cout << kitty.getBrain()->getIdeas(0) << std::endl ;
	}
    std::cout << "--------------------------------------\n" ;
    Dog Bobby;
	Bobby.makeSound() ;
	Bobby.getBrain()->setIdeas(0, "Food");
	{
		Dog Bobby2(Bobby);
		std::cout << Bobby2.getBrain()->getIdeas(0) << std::endl ;
		std::cout << Bobby.getBrain()->getIdeas(0) << std::endl ;
		Bobby2.getBrain()->setIdeas(0, "Play fetch");
		std::cout << Bobby2.getBrain()->getIdeas(0) << std::endl ;
		std::cout << Bobby.getBrain()->getIdeas(0) << std::endl ;
	}
}