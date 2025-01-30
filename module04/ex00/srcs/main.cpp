/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:16:36 by claprand          #+#    #+#             */
/*   Updated: 2025/01/30 14:00:50 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << GREY << "getType :" << RESET << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << GREY << "MakeSound :" << RESET << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();
    std::cout << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << std::endl;
    WrongAnimal* wa = new WrongAnimal();
    WrongAnimal *wc = new WrongCat();
    std::cout << GREY << "getType :" << RESET << std::endl;
    std::cout << wc->getType() << " " << std::endl;
    std::cout << GREY << "MakeSound :" << RESET << std::endl;
    wa->makeSound();
    wc->makeSound();
    std::cout << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << std::endl;
    Animal *newAnimal = new Dog();
    std::cout << GREY << "getType :" << RESET << std::endl;
    std::cout << newAnimal->getType() << " " << std::endl;
    std::cout << GREY << "MakeSound :" << RESET << std::endl;
    newAnimal->makeSound();
    std::cout << std::endl;
    newAnimal = new Cat();
    std::cout << GREY << "getType :" << RESET << std::endl;
    std::cout << newAnimal->getType() << " " << std::endl;
    std::cout << GREY << "MakeSound :" << RESET << std::endl;
    newAnimal->makeSound();
    return 0;
}