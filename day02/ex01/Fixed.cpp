/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:28:57 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/22 18:29:05 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed (): _value(0) {
    std::cout << "Default constructor was called" << std::endl;
  
}
//A constructor that takes a constant integer as a parameter and that converts it to
//the correspondant fixed(8) point value. The fractional bits value is initialized like
//in ex00.
Fixed::Fixed ( int const val_int ) {
    std::cout << "Int constructor was called" << std::endl;
    this->_value = val_int << _bits;
}
//A constructor that takes a constant floating point as a parameter and that converts
//it to the correspondant fixed(8) point value. The fractional bits value is initialized
//like in ex00.
Fixed::Fixed (float const val_flt){
    std::cout << "Float constructor was called" << std::endl;
    this->_value = roundf(val_flt * (1 << _bits));
}
// Copy constructor
Fixed::Fixed (const Fixed &other) {
    std::cout << "Copy constructor was called" << std::endl;
    this->_value = other._value;
}

Fixed & Fixed::operator = (Fixed const &other) {
    std::cout << "Assignation operator was called" << std::endl;
    this->_value = other.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &val) {
    out << val.toFloat();
    return (out);
}

Fixed::~Fixed () {
    std::cout << "Destructor was called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
std::cout << "GetRawBits member function was called" << std::endl;
	return _value;
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "SetRawBits member function was called" << std::endl;
	this->_value = raw;
}

//A member function float toFloat( void ) const; that converts the fixed point
//value to a floating point value.
float Fixed::toFloat( void ) const {
    return ((float)_value / (1 << _bits));
}

//A member function int toInt( void ) const; that converts the fixed point value
//to an integer value.
int Fixed::toInt( void ) const {
   return (_value / (1 << _bits)); 
}