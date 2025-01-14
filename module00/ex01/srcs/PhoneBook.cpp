/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:34:10 by claprand          #+#    #+#             */
/*   Updated: 2025/01/14 12:03:55 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
    this->_nbContact = 0;
    return;
}

PhoneBook::~PhoneBook(void){
    return;
}

std::string PhoneBook::getInput(std::string str) {
    std::string input;

    do {
        std::cout << str;
        std::getline(std::cin, input);

        input.erase(0, input.find_first_not_of(" \t"));
        input.erase(input.find_last_not_of(" \t") + 1);

        if (input.empty()) {
            std::cout << "Input cannot be empty. Please try again." << std::endl;
        }
    } while (input.empty());

    return input;
}


void PhoneBook::addContact(){
    if (this->_nbContact == 8)
        this->_nbContact = 0;
    this->_contacts[this->_nbContact].setFirstName(this->getInput("First Name : "));
    this->_contacts[this->_nbContact].setLastName(this->getInput("Last Name : "));
    this->_contacts[this->_nbContact].setNickname(this->getInput("Nickname : "));
    this->_contacts[this->_nbContact].setPhoneNumber(this->getInput("Phone Number : "));
    this->_contacts[this->_nbContact].setDarkestSecret(this->getInput("Darkest Secret : "));
    this->_nbContact++;
}

bool PhoneBook::checkInput(std::string input){
        
}

void PhoneBook::displayContacts() {
    std::cout << CYAN;
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name| Nickname |" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    
    for (int i = 0; i < 8; i++) {
        if (!this->_contacts[i].getFirstName().empty()) {
            std::cout << "|" << std::setw(10) << i + 1;
            std::cout << "|" << std::setw(10) << truncate(this->_contacts[i].getFirstName());
            std::cout << "|" << std::setw(10) << truncate(this->_contacts[i].getLastName());
            std::cout << "|" << std::setw(10) << truncate(this->_contacts[i].getNickName());
            std::cout << "|" << std::endl;
        }
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << RESET;
}

std::string PhoneBook::truncate(std::string str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

bool    PhoneBook::isnum(std::string str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!isdigit(str[i])){
            std::cout << RED "Index must be digits between 1-8." RESET << std::endl;
            return false;
        }
    }
    return true;
}

void PhoneBook::searchContact() {
    std::string input;
    int         index;

    if (this->_nbContact == 0) {
        std::cout << RED "No contacts in PhoneBook!" RESET << std::endl;
        return;
    }
    
    displayContacts();
    
    std::cout << "Enter index to display contact details: ";
    std::cin >> input;

    if (isnum(input) == false)
        return;
    
    index = atoi(input.c_str());
    if (index >= 1 && index <= 8 && !this->_contacts[index - 1].getFirstName().empty()) {
        std::cout << "\nContact Details:" << std::endl;
        std::cout << "First Name: " << this->_contacts[index - 1].getFirstName() << std::endl;
        std::cout << "Last Name: " << this->_contacts[index - 1].getLastName() << std::endl;
        std::cout << "Nickname: " << this->_contacts[index - 1].getNickName() << std::endl;
        std::cout << "Phone Number: " << this->_contacts[index - 1].getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << this->_contacts[index- 1].getDarkestSecret() << std::endl;
    }
    else
        std::cout << RED "Index does not exist." RESET << std::endl;
}