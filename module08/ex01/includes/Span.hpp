/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:38:27 by mpeulet           #+#    #+#             */
/*   Updated: 2025/02/17 16:38:21 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

class Span{

	public:

		Span();
		Span(unsigned int N);
		Span(Span const & cpy);
		Span & operator=(Span const & rhs);
		~Span();
		

		unsigned int getSize() const;
		std::vector<int> const & getSpan() const;
		
		
		void addNumber(int newNumber);
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;


		class Full : public std::exception{
			public:
				virtual const char * what() const throw(){
					return "Span is full.";
				} 
		};


		class NotEnough : public std::exception{
			public:
				virtual const char * what() const throw(){
					return "Span is too small to look for a range.";
				} 
		};


	private:
		unsigned int _size;
		std::vector<int> _span;

};

std::ostream &	operator<<(std::ostream & os, Span const & rhs);

#endif