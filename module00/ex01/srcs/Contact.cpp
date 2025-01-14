/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:29:35 by claprand          #+#    #+#             */
/*   Updated: 2025/01/10 16:05:48 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
    return;
}

Contact::~Contact(void){
    return;
}

void Contact::setFirstName(std::string firstname){
    this->_firstname = firstname;
}

void Contact::setLastName(std::string lastname){
    this->_lastname = lastname;
}

void Contact::setNickname(std::string nickname){
    this->_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phonenumber){
    this->_phonenumber = phonenumber;
}

void Contact::setDarkestSecret(std::string darkestsecret){
    this->_darkestsecret = darkestsecret;
}

std::string Contact::getFirstName() const{
    return (this->_firstname);
}

std::string Contact::getLastName() const{
    return (this->_lastname);
}

std::string Contact::getNickName() const{
    return (this->_nickname);
}

std::string Contact::getPhoneNumber() const{
    return (this->_phonenumber);
}

std::string Contact::getDarkestSecret() const{
    return (this->_darkestsecret);
}
