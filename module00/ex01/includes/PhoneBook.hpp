/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:18:20 by claprand          #+#    #+#             */
/*   Updated: 2025/01/22 15:44:11 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#define GREY "\033[0;90m"
#define RED	"\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define WHITE "\033[0;97m"
#define ORANGE "\033[38;5;214m"
#define RESET   "\033[0m"
#define CTRL_C " Program quit because of user : ctrl c!"
#define CTRL_D "Program quit because of user : ctrl d!"

# include "Contact.hpp"
# include <string>
# include <iostream>
# include <cctype>
# include <iomanip> 
# include <cstdlib>
# include <csignal>
#include <limits>

class PhoneBook {
    
    public :
        PhoneBook(void);
        ~PhoneBook(void);
    
        void addContact(void);
        void searchContact(void);
        void displayContacts();
        std::string truncate(std::string);
        bool isnum(std::string);

    private : 
        Contact _contacts[9];
        int     _nbContact;

        std::string getInput(std::string str);
};

#endif