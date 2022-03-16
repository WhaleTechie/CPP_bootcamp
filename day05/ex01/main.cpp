/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:47:19 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/15 19:47:19 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#define CLR "\x1B[31m"
#define ENCLR "\033[0m"

int		main()
{
	std::cout << CLR << "LET'S START"<< ENCLR << std::endl;
	Bureaucrat	b1("Perviy", 60);
	Bureaucrat	b2("Vtoroy", 40);
	Form		petrania("Dogovor", 50, 50);
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << petrania << std::endl;
	try
	{
		b1.signForm(petrania);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << petrania << std::endl;

	try
	{
		b2.signForm(petrania);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << petrania << std::endl;

	std::cout << CLR << "TEST 2"<< ENCLR << std::endl;
	Bureaucrat initBureaucrat;
	Form initForm;
	std::cout << initBureaucrat << std::endl;
	std::cout << initForm << std::endl;
	try
	{
		initBureaucrat.signForm(initForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << initForm << std::endl;

	Form	newForm("test", 148, 148);
	std::cout << newForm << std::endl;
	initBureaucrat.increase();
	std::cout << initBureaucrat << std::endl;
	try
	{
		initBureaucrat.signForm(newForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	initBureaucrat.increase();
	std::cout << initBureaucrat << std::endl;
	try
	{
		initBureaucrat.signForm(newForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

}