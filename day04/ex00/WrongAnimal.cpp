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

#include "WrongAnimal.hpp"
#define RED "\x1B[91m"

WrongAnimal::WrongAnimal() : _type("empty"){
    std::cout << "WrongAnimal Default constuctor was called\n";
}


WrongAnimal::WrongAnimal(std::string const &type) : _type(type){
    std::cout << "WrongAnimal constructor with type " << type << " was called\n";
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other) {
	this->_type = other.getType();
    std::cout << "WrongAnimal assignation operator was called" << std::endl;
	return *this;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other) :_type(other._type) {
    std::cout << "WrongAnimal copy constructor was called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << RED << "WrongAnimal " <<_type <<" Destructor was called" << EN << std::endl;
}

std::string WrongAnimal::getType(void) const{
    return this->_type;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "[WrongAnimal default sound]" << std::endl;
}