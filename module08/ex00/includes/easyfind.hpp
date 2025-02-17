/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:51:51 by mpeulet           #+#    #+#             */
/*   Updated: 2025/02/17 11:27:37 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

class NotFound : public std::exception{
	public:
		virtual const char * what( void ) const throw(){
			return "Nb not found.";
		}
};

template<typename T>
typename T::const_iterator easyfind( T const & type, int const nb ){
		typename T::const_iterator it = std::find(type.begin(), type.end(), nb);
		if (it != type.end())
			return it;
		else{
			throw ::NotFound();
		}
}

#endif