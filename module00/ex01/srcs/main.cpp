/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:20:17 by claprand          #+#    #+#             */
/*   Updated: 2025/01/22 15:22:12 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	signalHandler( int signum ) {
	std::cout << CTRL_C << std::endl;
	std::exit( signum );
}

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

    std::signal(SIGINT, signalHandler);
    displayWelcome();

    while (true) {
        std::cout << YELLOW << "What would you like to do? > " << RESET;
        std::getline(std::cin, command);

        if (command == "ADD") {
            phonebook.addContact();
        } else if (command == "SEARCH") {
            phonebook.searchContact();
        } else if (command == "EXIT") {
            break;
        } else if (std::cin.eof()) {
            exit(0);
        } else {
            std::cout << RED << "Invalid command. Please use ADD, SEARCH or EXIT." << RESET << std::endl;
        }
    }

    return 0;
}
