/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:23:48 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/07 21:23:48 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#define MAGENTA2 "\x1B[95m"
#define EN "\033[0m"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << MAGENTA2 << "WrongCat constructor was called \t=^..^=" << EN << std::endl;

}

WrongCat &WrongCat::operator=(WrongCat const &other){
    std::cout << "WrongCat assignation operator was called" << std::endl;
	WrongAnimal::operator=(other);
	return *this;
}


WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other) {
	std::cout << "WrongCat copy constructor was called" << std::endl;
}


WrongCat::~WrongCat(){
    std::cout << MAGENTA2 << "WrongCat destuctor was called" << EN << std::endl;
}


void WrongCat::makeSound( void ) const {
        std::cout << MAGENTA2 << "meow" << EN << std::endl;
}