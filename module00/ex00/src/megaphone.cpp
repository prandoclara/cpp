/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:51:58 by claprand          #+#    #+#             */
/*   Updated: 2025/01/22 10:43:15 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

std::string upperletter(std::string s)
{
    std::size_t i;
    for (i = 0; i < s.length(); i++)
        s[i] = std::toupper(s[i]);
    return (s);
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        int i;
        for (i = 1; i < ac; i++)
            std::cout << upperletter(av[i]);
    }
    std::cout << std::endl;
}