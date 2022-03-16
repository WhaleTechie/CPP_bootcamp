/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:09:01 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/26 12:09:01 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <algorithm>
#include <iostream>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("\e[0;31mValue not found\e[0m");
		}
};

template<typename T>
typename T::iterator easyfind(T &container, int number)
{
	typename T::iterator found = std::find(container.begin(), container.end(), number);
	if (found == container.end())
		throw NotFoundException();
	return (found);
}

#endif