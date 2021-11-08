/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animap.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:11:20 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/06 19:11:20 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#define RED "\x1B[91m"

Animal::Animal() : _type("empty"){
    std::cout << "Animal Default constuctor was called\n";
}


Animal::Animal(std::string const &type) : _type(type){
    std::cout << "Animal constructor with type " << type << " was called\n";
}

Animal &Animal::operator=(Animal const &other) {
	this->_type = other.getType();
    std::cout << "Animal assignation operator was called" << std::endl;
	return *this;
}

Animal::Animal(Animal const &other) :_type(other._type) {
    std::cout << "Animal copy constructor was called" << std::endl;
}

Animal::~Animal(){
    std::cout << RED << "Animal " <<_type <<" Destructor was called" << EN << std::endl;
}

std::string Animal::getType(void) const{
    return this->_type;
}

void	Animal::makeSound( void ) const
{
	std::cout << "[animal default sound]" << std::endl;
}