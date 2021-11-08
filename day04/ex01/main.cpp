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
#include "Brain.hpp"
#include <iostream>

int main()
{
	Animal *animals[100];
	Dog a;
	Cat b;
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++){
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}
	std::cout << std::endl;
std::cout << std::endl;
	Cat deep;
	std::cout << std::endl;
	Cat cpy(deep);
	std::cout << std::endl;

	std::string *deepideas = deep.getIdea();
	std::string *cpyideas = cpy.getIdea();
	std::cout << "deepideas[4] before setting deepideas: " << deepideas[4] << std::endl;
	std::cout << "cpyideas[4] before setting deepideas: " << cpyideas[4] << std::endl;
	deep.setIdea("test");
	deepideas = deep.getIdea();
	cpyideas = cpy.getIdeas();
	std::cout << "deepideas[4] after setting deepideas: " << deepideas[4] << std::endl;
	std::cout << "cpyideas[4] after setting deepideas: " << cpyideas[4] << std::endl << std::endl
	for (int i = 0; i < 10; i++)
		delete animals[i];

	return (0);
}