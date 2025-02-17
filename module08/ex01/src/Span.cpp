/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:16:19 by mpeulet           #+#    #+#             */
/*   Updated: 2025/02/17 11:06:09 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0), _span() {}

Span::Span(unsigned int N) : _size(N), _span() {}

Span::Span(Span const & cpy) : _size(cpy.getSize()), _span(cpy.getSize()) {}

Span::~Span(){
	std::cout << "Span destroyed." << std::endl;
}

Span & Span::operator=(Span const & rhs){
	if (this != &rhs){
		_size = rhs.getSize();
		_span.clear();
		_span.insert(_span.end(), rhs._span.begin(), rhs._span.end());
	}
	return *this;
}

unsigned int Span::getSize() const {
	return _size;
}

std::vector<int> const & Span::getSpan() const {
	return _span;
}

void Span::addNumber(int newNumber){
	if (_span.size() < getSize()) 
		_span.push_back(newNumber);
	else 
		throw Full();
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	unsigned int size = std::distance(begin, end);
	if (_span.size() + size > getSize())
		throw Full();
	else {
		_span.insert(_span.end(), begin, end);
	}							
}

unsigned int Span::shortestSpan() const{
	if (_span.size() < 2)
		throw NotEnough();
	std::vector<int> vec(_span);
	std::sort(vec.begin(), vec.end());
	std::vector<int>::const_iterator it =  vec.begin();
	std::vector<int>::const_iterator next =  it + 1;

	unsigned int shortest = * next - * it;
	
	for (; next != vec.end(); ++it, ++next){
		unsigned int span = * next - * it;
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}

unsigned int Span::longestSpan() const{
	if (_span.size() < 2)
		throw NotEnough();
	return *std::max_element(_span.begin(), _span.end()) - *std::min_element(_span.begin(), _span.end());
}

std::ostream & operator<<(std::ostream & os, Span const & rhs){
	if (rhs.getSize() > 0){
		for(std::vector<int>::const_iterator it = rhs.getSpan().begin(); it != rhs.getSpan().end(); ++it){
			os << "[" << * it << "]";
		}
	}
	return os;
}

