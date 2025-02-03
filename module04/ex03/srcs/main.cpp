/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:17:44 by claprand          #+#    #+#             */
/*   Updated: 2025/01/31 16:37:10 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"

int main(){
    AMateria *a;
    AMateria *b;
    ICharacter Clara = ICharacter("Clara");
    
    a = new Cure;
    b = new Ice;
    a->getType();
    b->getType();
    a->use(Clara);
    b->use(Clara);
    delete a;
    delete b;
}