/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:32:15 by claprand          #+#    #+#             */
/*   Updated: 2025/01/15 13:42:21 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
# include <iostream>

int main(){
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    std::cout << "Value of : " << std::endl;
    std::cout << "string : " << string << std::endl;
    std::cout << "stringPTR : " << *stringPTR << std::endl;
    std::cout << "stringREF : " << stringREF << std::endl;

    std::cout << "Memory Address : " << std::endl;
    std::cout << "string : " << &string << std::endl;
    std::cout << "stringPTR : " << stringPTR << std::endl;
    std::cout << "stringREF : " << &stringREF << std::endl;
}