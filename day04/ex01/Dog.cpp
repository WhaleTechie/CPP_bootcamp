/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:12:28 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/06 19:12:28 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#define BLUE "\x1B[34m"

Dog::Dog() : Animal("Dog"){
    std::cout << BLUE << "Dog constructor was called\tˁ˚ᴥ˚ˀ" << EN << std::endl;
}

Dog &Dog::operator=(Dog const &other) {
    std::cout << "Dog assignation operator was called" << std::endl;
	Animal::operator=(other);
	return *this;
}

Dog::Dog(Dog const &other) : Animal(other){
	std::cout << "Dog copy constructor was called" << std::endl;
}


Dog::~Dog(){
    std::cout << BLUE << "Dog destructor was called" << EN << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << BLUE << "gav-gav" << EN << std::endl;
}