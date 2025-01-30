/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:16:36 by claprand          #+#    #+#             */
/*   Updated: 2025/01/30 15:20:42 by claprand         ###   ########.fr       */
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
    
}

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;
// delete i;
// return 0;
// }