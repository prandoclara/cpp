/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:20:17 by claprand          #+#    #+#             */
/*   Updated: 2025/01/13 16:21:14 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void displayWelcome() {
    std::cout << "\033[1;36m";
    std::cout << "**********************************************" << std::endl;
    std::cout << "*                                            *" << std::endl;
    std::cout << "*          Welcome to your PhoneBook         *" << std::endl;
    std::cout << "*                                            *" << std::endl;
    std::cout << "**********************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "\033[0m";
}

int main() {
    PhoneBook phonebook;
    std::string command;

    displayWelcome();
    const std::string prompts[] = {
        MAGENTA "What's next, friend? > " RESET,
        YELLOW "PhoneBook at your service! > " RESET,
        GREEN "What would you like to do? > " RESET };
    
    while (1) {
        std::cout << prompts[rand() % 3];
        std::cin >> command;

        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command. Please use ADD, SEARCH or EXIT" << std::endl;
    }
    return (0);
}