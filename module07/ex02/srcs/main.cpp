/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:00:33 by claprand          #+#    #+#             */
/*   Updated: 2025/02/14 15:22:02 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <cstdlib>

int	main( void ) {

    {
        Array<float>    floatArray( 5 ) ;
        for ( unsigned int i = 0; i < 5; ++i) {
            floatArray[i] = 1.1 * ( i + 1) ;
        }
        ::iter( floatArray.getArray(), floatArray.size(), ::print<float> ) ;
        try {
            std::cout << floatArray[5] ;
        }
        catch ( const std::exception & e ) {
            std::cout << e.what() << "\n" ;
        }
    }
    std::cout << "---------------------\n" ;
    {
        Array<float>    floatArray( 5 ) ;
        for ( unsigned int i = 0; i < 5; ++i) {
            floatArray[i] = 1.1 * ( i + 1) ;
        }
        Array<float>      cpy( floatArray ) ;
        ::iter( cpy.getArray(), cpy.size(), ::print<float> ) ;
        std::cout << "---------\n" ;
        for ( unsigned int i = 0; i < 5; ++i) {
            floatArray[i] = 2.2 * ( i + 1 ) ;
        }
        ::iter( floatArray.getArray(), floatArray.size(), ::print<float> ) ;
        cpy = floatArray ;
        std::cout << "---------\n" ;
        ::iter( cpy.getArray(), cpy.size(), ::print<float> ) ;
    }
    std::cout << "---------------------\n" ;
	
	return 0 ;	
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
