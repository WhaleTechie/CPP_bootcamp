/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:41:00 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/21 13:41:02 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed (): _value(0) {
    std::cout << "Default constructor was called" << std::endl;
  
}

Fixed::Fixed (const Fixed &other) {
    std::cout << "Copy constructor was called" << std::endl;
    this->_value = other._value;
}

Fixed & Fixed::operator = (Fixed &other) {
    std::cout << "Assignation operator was called" << std::endl;
    this->_value = other.getRawBits();
	return *this;
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