/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:51:58 by claprand          #+#    #+#             */
/*   Updated: 2025/01/10 14:14:16 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

std::string upperletter(std::string s)
{
    std::size_t i;
    i = 0;
    while (i < s.length())
    {
        s[i] = std::toupper(s[i]);
        i++;
    }
    return (s);
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        int i;
        i = 1;
        while (i < ac)
        {
            std::cout << upperletter(av[i]);
            i++;
        }    
    }
    std::cout << std::endl;
}