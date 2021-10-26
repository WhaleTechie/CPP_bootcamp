/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:59:19 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/25 16:59:21 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <cmath>
#include <iostream>

class Fixed
{
    private:
        int                 _value;
        static const int    _bits = 8;
    public:
        Fixed ();
        Fixed ( int const val_int );
        Fixed ( float const val_fl );
        Fixed ( const Fixed &other );
        Fixed &	operator = ( Fixed const &other );
// Six comparison operators: >, <, >=, <=, == and !=
        bool	operator > ( Fixed const &other ) const;
        bool	operator < ( Fixed const &other ) const;
        bool	operator >= ( Fixed const &other ) const;
        bool	operator <= ( Fixed const &other ) const;
        bool	operator == ( Fixed const &other ) const;
        bool	operator != ( Fixed const &other ) const;

// Four arithmetic operators: +, -, *, and /.
        Fixed   operator - ( Fixed const &other) const;
        Fixed   operator + ( Fixed const &other) const;
        Fixed   operator * ( Fixed const &other) const;
        Fixed   operator / ( Fixed const &other) const;

//The pre-increment, post-increment, pre-decrement and post-decrement operators
        Fixed &	operator ++ ( void );
        Fixed &	operator -- ( void );
        Fixed   operator ++ ( int );
        Fixed   operator -- ( int );
        ~Fixed ();

        static Fixed &	max ( Fixed &a, Fixed &b);
	    static Fixed &	min ( Fixed &a, Fixed &b);
	    static Fixed const & max ( Fixed const &a, Fixed const &b);
	    static Fixed const & min ( Fixed const &a, Fixed const &b);

        int		getRawBits( void ) const;
        void	setRawBits( int const raw );

        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream    &operator<<(std::ostream &out, Fixed const &in);

#endif

