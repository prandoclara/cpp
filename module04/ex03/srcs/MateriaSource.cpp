/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:28:41 by claprand          #+#    #+#             */
/*   Updated: 2025/02/04 11:33:27 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _type("Default type"), _size(0) {
    for (int i = 0; i < 4; i++){
        _stored[i] = 0;
    }
    std::cout << MAGENTA << "MateriaSource :  Default constructor called!" << RESET << std::endl;
    return;
}

MateriaSource::MateriaSource(std::string const & type) : _type(type), _size(0) {
    for (int i = 0; i < 4; i++){
        _stored[i] = 0;
    }
    std::cout << MAGENTA << "MateriaSource : Parametric constructor called!" << RESET << std::endl;
    return;
}

MateriaSource::MateriaSource(MateriaSource const & cpy){
    std::cout << MAGENTA << "MateriaSource : Copy constructor called!"  << RESET << std::endl;
    for (int i = 0; i < 4; i++){
        _stored[i] = 0;
    }
    this->_type = cpy._type;
    this->_size = cpy._size;
    for (int i = 0; i < 4; i++){
        if (cpy._stored[i])
            _stored[i] = cpy._stored[i]->clone();
    }
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++){
        if (_stored[i]){
            delete _stored[i];
            _stored[i] = 0;
        }
    }
    std::cout << MAGENTA << "MateriaSource : Deconstructor called!"  << RESET << std::endl;
    return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs){
    if (this != &rhs){
        for (int i = 0; i < 4; i++){
            delete _stored[i];
            _stored[i] = 0;
        }
        this->_type = rhs._type;
        this->_size = rhs._size;
        for (int i = 0; i < 4; i++){
            if (rhs._stored[i])
                _stored[i] = rhs._stored[i]->clone();\
            else
                _stored[i] = 0;
        }
    }
    return *this;
}

std::string const & MateriaSource::getType() const{
    return this->_type;
}

unsigned int const & MateriaSource::getSize() const{
    return this->_size;
}

void MateriaSource::learnMateria(AMateria* m){
    if (!m){
        std::cout << RED << "Nothing to learn." << RESET << std::endl;
    }
    else if (_size < 4){
        _stored[_size] = m;
        _size++;
        std::cout << GREY << "New Materia learned." << RESET << std::endl;
    }
    else
        std::cout << RED << "Storage full." << RESET << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    if (_size < 1){
        std::cout << RED << "Storage is empty." << RESET << std::endl;
    }
    for (unsigned int i = 0; i < _size; i++){
        if (type == _stored[i]->getType())
            return _stored[i]->clone();
    }
    std::cout << RED << "Type Unknown" << RESET << std::endl;
    return 0;
}