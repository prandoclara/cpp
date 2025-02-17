/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:24:09 by mpeulet           #+#    #+#             */
/*   Updated: 2025/02/17 14:06:18 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>{
	public:
		MutantStack<T, C>() : std::stack<T, C>() {}
		MutantStack<T, C>(MutantStack const & cpy) : std::stack<T, C>(cpy) {} 
		MutantStack & operator=(MutantStack<T, C> const & rhs) {
			if (this != rhs)
				std::stack<T, C>::operator=(rhs);
			return *this;
		}
		virtual ~MutantStack<T, C>() {}

		typedef typename C::iterator iterator;
		typedef typename C::const_iterator const_iterator;
		typedef typename C::reverse_iterator reverse_iterator;
		typedef typename C::const_reverse_iterator const_reverse_iterator;

		iterator begin(){return this->c.begin();}
		
		iterator end(){return this->c.end();}
		
		const_iterator begin() const{return this->c.begin();}
		
		const_iterator end() const{return this->c.end();}
		
		reverse_iterator rbegin(){return this->c.rbegin();}

		reverse_iterator rend() {return this->c.rend();}
		
		const_reverse_iterator rbegin() const{return this->c.rbegin();}

		const_reverse_iterator rend() const{return this->c.rend();}
};

#endif