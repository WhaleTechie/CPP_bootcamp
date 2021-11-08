/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:11:53 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/06 19:11:53 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#define MAGENTA "\x1B[35m"
#define EN "\033[0m"

Cat::Cat() : Animal("Cat") {
    std::cout << MAGENTA << "Cat constructor was called \t=^..^=" << EN << std::endl;
    this->_brain = new Brain();
}

Cat &Cat::operator=(Cat const &other){
    std::cout << "Cat assignation operator was called" << std::endl;
	this->_type = other.getTypemake fclean();
	return *this;
}


Cat::Cat(Cat const &other) : Animal("Cat") {
	std::cout << "Cat DEEP copy constructor was called" << std::endl;
    this->_brain = new Brain();
	*this = other;
    *(this->_brain) = *(other.getBrain());
}

Cat::~Cat(){
    std::cout << MAGENTA << "Cat destuctor was called" << EN << std::endl;
    delete this->_brain;
}

Brain*	Cat::getBrain(void) const {
	return (this->_brain);
}

void Cat::makeSound( void ) const {
        std::cout << MAGENTA << "meow" << EN << std::endl;
}