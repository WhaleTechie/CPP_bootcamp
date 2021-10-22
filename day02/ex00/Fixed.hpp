/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:40:50 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/21 13:40:52 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// From now on, each class you write MUST be in orthodox canonical form: At least
    // one default constructor, 
    // a copy contructor, 
    // an assignation operator overload 
    // and a destructor.

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int                 _value;
        static const int    _bits = 8;
    public:
        Fixed ();
        Fixed (const Fixed &other);
        Fixed &	operator = (Fixed &other);
        ~Fixed ();

        int		getRawBits( void ) const;
        void	setRawBits( int const raw );
};

#endif