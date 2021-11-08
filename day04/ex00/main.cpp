/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:11:37 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/06 19:11:37 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete meta;
	delete j;
	std::cout << std::endl;
	std::cout << "Wrong Example\n";
	std::cout << std::endl;
	// wrong example
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();
	std::cout << "Type of wrong cat is " << wrong_i->getType() << " " << std::endl;
	wrong_i->makeSound(); //will output the cat sound!
	wrong_meta->makeSound();
	delete wrong_i;
	delete wrong_meta;

	return (0);
}
