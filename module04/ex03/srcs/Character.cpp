/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:49:43 by claprand          #+#    #+#             */
/*   Updated: 2025/02/04 11:38:08 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Unknown Character"), _inventorySize(0){
    for (int i = 0; i < 4; i++){
        _inventory[i] = 0;
    }
    std::cout << YELLOW << "Character :  Default constructor called!" << RESET << std::endl;
    return;
}

Character::Character(std::string name) : _name(name), _inventorySize(0){
    for (int i = 0; i < 4; i++){
        _inventory[i] = 0;
    }
    std::cout << YELLOW << "Character : Parametric constructor called!" << RESET << std::endl;
    return;
}

Character::Character(Character const & cpy) : _inventorySize(0) {
    std::cout << YELLOW << "Character : Copy constructor called!" << RESET << std::endl;
    for (int i = 0; i < 4; i++) {
        _inventory[i] = 0;
    }
    this->_name = cpy._name;
    this->_inventorySize = cpy._inventorySize;
    if (_inventory > 0){
        for (unsigned int i = 0; i < _inventorySize; i++){
            _inventory[i] = cpy._inventory[i]->clone();
        }
    }
}

Character::~Character(){
    for (int i = 0; i < 4; i++){
        if (_inventory[i]){
            delete _inventory[i];
            _inventory[i] = 0;
        }
    }
    std::cout << YELLOW << "Character : Deconstructor called!"  << RESET << std::endl;
    return ;
}

Character &Character::operator=(Character const &rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 4; i++){
            delete _inventory[i]; 
            _inventory[i] = 0;
        }
        this->_name = rhs._name;
        this->_inventorySize = rhs._inventorySize;
        for (int i = 0; i < 4; i++){
            if (rhs._inventory[i])
                _inventory[i] = rhs._inventory[i]->clone();
            else
                _inventory[i] = 0;
        }
    }
    return *this;
}

std::string const & Character::getName() const{
    return _name;
}

unsigned int const & Character::getIventorySize() const{
    return _inventorySize; 
}

void Character::equip(AMateria* m){
    if (!m){
        std::cout << RED << "Nothing to equip." << RESET << std::endl;
    }
    else if (_inventorySize < 4){
        _inventory[_inventorySize] = m;
        _inventorySize++;
        std::cout << GREY << "New Materia equiped with " << getName() << RESET << std::endl;
    }
    else{
        std::cout << RED << "Inventory full." << RESET << std::endl;
    }
}

void Character::unequip(int idx){
    if (idx < 0 || idx > 3 || (unsigned)idx >= _inventorySize || !_inventorySize){
        std::cout << RED << "Unequip failed." << RESET << std::endl;
        return ;
    }
    std::cout << GREY << _inventory[idx]->getType() << " Materia dropped by " << getName() << RESET << std::endl;
    _inventory[idx] = 0;
    for (int i = idx; i < 3; i++){
        _inventory[i] = _inventory[i + 1];
    }
    _inventory[3] = _inventory[0];
    _inventorySize--;
    std::cout << GREY << "There is/are " << getIventorySize() << " Materia in the inventory" << RESET << std::endl;
}

void Character::use(int idx, ICharacter& target){
    if (idx < 0 || idx > 3 || !_inventory[idx]){
        std::cout << RED << "Use function failed." << RESET << std::endl;
        return ;
    }
    std::cout << getName() << " ";
    _inventory[idx]->use(target);
}