/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:30:32 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/24 16:30:32 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >	
void swap( T& x, T& y ){
	T temp = x;
	x = y;
	y = temp;
}

template< typename T >	
T const& min( const T& x, const T& y ){
	return ( x < y ? x : y);
}

template< typename T >	
T const& max( const T& x, const T& y ){
return ( x > y ? x : y);
}

#endif