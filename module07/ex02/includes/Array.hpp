/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:03:24 by claprand          #+#    #+#             */
/*   Updated: 2025/02/14 15:07:42 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# define OoB "Index is out of bounds."

template < typename T >
class	Array {
	public:
		Array(void) : _size(0), _array(NULL) {}
		Array(unsigned int n) : _size(n), _array(new T[n]()) {} 
		Array(Array const & cpy) : _size(cpy.size()), _array(new T[cpy.size()]){
			for (unsigned int i = 0; i < _size; ++i) {
				_array[i] = cpy._array[i];
			}
		}
		~Array() {delete [] _array;}
		
		Array & operator=(Array const & rhs){
			if (this != &rhs){
				delete [] _array;
				_size = rhs.size();
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; ++i){
					_array[i] = rhs._array[i]; 
				}
			}
			return *this;
		}
		
		T &	operator[](unsigned int  index){
			if (index >= _size)
				throw OofBException();
			return _array[index];
		}
		
		class OofBException : public std::exception{
			public:
				virtual const char * what() const throw () {
					return OoB;
				}
		};

		unsigned int size() const {return _size ;}
		
		T *	getArray() const {return _array;}

	private:
		unsigned int _size;
		T * _array;
	
};

template< typename A, typename L, typename F>
void iter( A * adress, L len, F function ){
	for (L i = 0; i < len; ++i)
		function(adress[i]);
}

template< typename T >
void print(T & item){
	std::cout << item << std::endl;
}

#endif