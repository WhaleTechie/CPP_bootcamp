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

#include "Bureaucrat.hpp"
#define CLR "\x1B[31m"
#define ENCLR "\033[0m"

int		main()
{
	
	std::cout << CLR << "Exception Test" << ENCLR << std::endl;
	std::cout << CLR << "Bureaucrat increase, decrease test" << ENCLR <<  std::endl;
	Bureaucrat initBureaucrat = Bureaucrat();
	std::cout << initBureaucrat << std::endl;
    std::cout << "double increase" << std::endl;
	initBureaucrat.increase();
	initBureaucrat.increase();
    std::cout << "decrease"<< std::endl;
	initBureaucrat.decrease();
	std::cout << initBureaucrat << std::endl;

	std::cout << CLR << "Bureaucrat exception test" <<  ENCLR << std::endl;
	std::cout << CLR << "Bureaucrat TooHigh test" <<  ENCLR << std::endl;
	try 
	{
		Bureaucrat bureaucrat1("Zero", 0);
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << CLR << "Bureaucrat TooLow test" <<  ENCLR << std::endl;
	try 
	{
		Bureaucrat bureaucrat2("OneFiftyOne", 151);
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << CLR << "Bureaucrat increase TooHigh test" << ENCLR << std::endl;
	try 
	{
		Bureaucrat bureaucrat3("One", 1);
		bureaucrat3.increase();
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << CLR << "Bureaucrat decrease TooLow test" << ENCLR << std::endl;
	try 
	{
		Bureaucrat bureaucrat4("OneFifty", 150);
		bureaucrat4.decrease();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << CLR << "general Test "<< ENCLR << std::endl;
	Bureaucrat bureaucrat("Normal", 30);
	Bureaucrat copyBureaucrat = Bureaucrat(bureaucrat);
	std::cout << copyBureaucrat << std::endl;
}