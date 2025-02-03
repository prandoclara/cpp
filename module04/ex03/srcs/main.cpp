/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:17:44 by claprand          #+#    #+#             */
/*   Updated: 2025/02/03 15:30:36 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    std::cout << std::endl;
    src->learnMateria(new Ice());
    std::cout << std::endl;
    src->learnMateria(new Cure());
    
    std::cout << std::endl << std::endl;
    ICharacter* me = new Character("me");
    std::cout << std::endl;
    AMateria* tmp;
    std::cout << std::endl;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    std::cout << std::endl;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);

    std::cout << std::endl;
    ICharacter* bob = new Character("bob");
    std::cout << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    std::cout << std::endl;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->use(3, *bob);
    delete bob;
    std::cout << std::endl;
    delete me;
    std::cout << std::endl;
    delete src;
    return 0;
}
