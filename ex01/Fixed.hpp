/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:29:15 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/22 18:29:20 by lkrinova         ###   ########.fr       */
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
        Fixed &	operator = (Fixed const &other);
        ~Fixed ();

        int		getRawBits( void ) const;
        void	setRawBits( int const raw );

        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream    &operator<<(std::ostream &out, Fixed const &in);

#endif
