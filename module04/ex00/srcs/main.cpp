/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:16:36 by claprand          #+#    #+#             */
/*   Updated: 2025/02/04 10:40:04 by claprand         ###   ########.fr       */
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
    delete j;
    delete i;
    delete meta;
    std::cout << std::endl << "---------------------------------------" << std::endl << std::endl;
    
    WrongAnimal* wa = new WrongAnimal();
    WrongAnimal *wc = new WrongCat();
    std::cout << GREY << "getType :" << RESET << std::endl;
    std::cout << wc->getType() << " " << std::endl;
    std::cout << GREY << "MakeSound :" << RESET << std::endl;
    wa->makeSound();
    wc->makeSound();
    delete wa;
    delete wc;
    
    std::cout << std::endl << "---------------------------------------" << std::endl << std::endl;

    Animal *newAnimal = new Dog();
    std::cout << newAnimal->getType() << " " << std::endl;
    newAnimal->makeSound();
    std::cout << std::endl;
    delete newAnimal;
    
    newAnimal = new Cat();
    std::cout << newAnimal->getType() << " " << std::endl;
    newAnimal->makeSound();
    delete newAnimal;
    
    std::cout << std::endl << "---------------------------------------" << std::endl << std::endl;

    Dog newDog;
    Dog cpyDog = newDog;
    newDog.makeSound();
    cpyDog.makeSound();

    std::cout << std::endl << "---------------------------------------" << std::endl << std::endl;

    Cat newCat;
    Cat cpyCat = newCat;
    newCat.makeSound();
    cpyCat.makeSound();
    
    return 0;
}