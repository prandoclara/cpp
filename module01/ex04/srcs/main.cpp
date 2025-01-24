/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:59:09 by claprand          #+#    #+#             */
/*   Updated: 2025/01/24 11:08:07 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>

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

int main(int ac, char **av){
    if (ac != 4) {
        std::cerr << GREY << "Usage: " << av[0] << " <filename> <string1> <string2>" << RESET << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty() || s2.empty()) {
        std::cerr << RED << "Error: Strings cannot be empty." << RESET << std::endl;
        return 1;
    }

    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << RED << "Error: Could not open input file \"" << filename << "\"." << RESET << std::endl;
        return 1;
    }

    std::ostringstream buffer;
    buffer << inputFile.rdbuf();
    std::string content = buffer.str();
    inputFile.close();

    if (content.find(s1) == std::string::npos) {
        std::cerr << ORANGE << "Warning: The string \"" << s1 << "\" was not found in the file. No changes were made." << RESET << std::endl;
        return 0;
    }

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile.is_open()) {
        std::cerr << RED << "Error: Could not create output file \"" << filename + ".replace\"." << RESET << std::endl;
        return 1;
    }

    outputFile << content;
    outputFile.close();

    std::cout << GREEN << "File processed successfully. Output: " << filename + ".replace" << RESET << std::endl;
    return 0;
}
