/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:28:04 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/24 21:28:04 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include<iostream>

template <typename T>
void    write(T const &a){
    std::cout << a << std::endl;
}

template <typename T>
void    plusTwo(T &a ){
    a = a + 2;
}

template <typename T>
void iter(T array[], size_t len, void (*function)(T &))
{
    for(size_t i = 0; i < len; i++)
	{
		function(array[i]);
	}
}

template <typename T>
void iter(T const array[], size_t len, void (*function)(T const&))
{
	for (size_t i = 0; i < len; i++)
		function(array[i]);
}

#endif
