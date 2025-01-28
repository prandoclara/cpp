/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:24:46 by clara             #+#    #+#             */
/*   Updated: 2025/01/28 14:14:19 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main( void ) {
//     std::cout << "TEST 1" << std::endl;
//     Fixed a;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;
//     std::cout << b << std::endl;
//     std::cout << Fixed::max( a, b ) << std::endl;
    

//     std::cout << "TEST 2" << std::endl;
//     Fixed c;
    
//     return 0;
// }

int main(void) {
    std::cout << "--- Initialisation ---" << std::endl;
    Fixed a;
    Fixed b(5);
    Fixed c(5.05f);
    std::cout << "a (default)     : " << a << std::endl; 
    std::cout << "b (int=5)       : " << b << std::endl; 
    std::cout << "c (float=5.05)  : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "\n--- Incrémentation ---" << std::endl;
    std::cout << "a               : " << a << std::endl;
    std::cout << "a++ (postfixe)  : " << a++ << std::endl;
    std::cout << "a (après a++)   : " << a << std::endl;
    std::cout << "++a (préfixe)   : " << ++a << std::endl;

    std::cout << std::endl;
    std::cout << "\n--- Opérations arithmétiques ---" << std::endl;
    Fixed d = b + c; // 5 + 5.05
    Fixed e = b - c; // 5 - 5.05
    Fixed f = b * c; // 5 * 5.05
    Fixed g = b / c; // 5 / 5.05

    std::cout << "b + c           : " << d << std::endl;  // 10.05
    std::cout << "b - c           : " << e << std::endl;  // -0.05
    std::cout << "b * c           : " << f << std::endl;  // 25.25
    std::cout << "b / c           : " << g << std::endl;  // ~0.9901

    std::cout << std::endl;
    std::cout << "\n--- Comparaisons ---" << std::endl;
    std::cout << "b > c           : " << (b > c) << std::endl;  // 0 (faux)
    std::cout << "b < c           : " << (b < c) << std::endl;  // 1 (vrai)
    std::cout << "b == c          : " << (b == c) << std::endl; // 0 (faux)
    std::cout << "b != c          : " << (b != c) << std::endl; // 1 (vrai)

    std::cout << std::endl;
    std::cout << "\n--- Min/Max ---" << std::endl;
    std::cout << "Min(b, c)       : " << Fixed::min(b, c) << std::endl;  // 5
    std::cout << "Max(b, c)       : " << Fixed::max(b, c) << std::endl;  // 5.05
    return 0;
}

