/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:48:24 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/08 17:48:24 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#define BLUE "\x1B[34m"

Dog::Dog() : Animal("Dog"){
    std::cout << BLUE << "Dog constructor was called\tˁ˚ᴥ˚ˀ" << EN << std::endl;
	this->_brain = new Brain();
}

Dog &Dog::operator=(Dog const &other) {
    std::cout << "Dog assignation(Deep copy) operator was called" << std::endl;
	this->_type = other.getType();
	*(this->_brain) = *(other.getBrain());
	return *this;
}

Dog::Dog(Dog const &other) : Animal("Dog"){
	std::cout << "Dog copy constructor was called" << std::endl;
	this->_brain = new Brain();
	*this = other;
}


Dog::~Dog(){
    std::cout << BLUE << "Dog destructor was called" << EN << std::endl;
	delete this->_brain;
}

void	Dog::makeSound( void ) const {
	std::cout << BLUE << "gav-gav" << EN << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->_brain);
}