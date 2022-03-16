/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:37:19 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/28 23:37:19 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>
#include <vector>
#include <ctime>

int main()
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	srand(time(NULL));
	std::list<int> list;
	for (size_t i = 0; i < 10001; i++){
		list.push_back(rand() % 1000);
	}

	Span span = Span(10001);
	span.addNumber(list.begin(), list.end());

	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;

	try {
		sp.addNumber(11);
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	Span sp_1 = Span(0);
	try {
		sp_1.shortestSpan();
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	Span sp_2 = Span(1);
	try {
		sp_2.longestSpan();
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

}
