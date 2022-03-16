/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:45:35 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/24 21:45:35 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#define MAX_VAL 750

int main()
{
	srand(time(NULL));

	const int count = 5;

	Array<int> a(count);
	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = rand() % 100 + 1;

	Array<std::string> c(count);
	c[0] = "Odin";
	c[1] = "Dva";
	c[2] = "Tri";
	c[3] = "Four'";
	c[4] = "Pyat";

	Array<int> b(a);
	Array<std::string> d(c);

	std::cout << "before: " << std::endl << "a\tb\tc\td" << std::endl << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << a[i] << "\t" << b[i] << "\t" << c[i] << "\t" << d[i] << std::endl;

	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = a[i] * 2;

	for (unsigned int i = 0; i < c.size(); i++)
		c[i] = c[i].append("_2").data();

	std::cout << "after: " << std::endl << "a\tb\tc\td" << std::endl << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << a[i] << "\t" << b[i] << "\t" << c[i] << "\t" << d[i] << std::endl;
	std::cout << std::endl;

	Array<int> e;

	try
	{
		std::cout << e[1] << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

    return 0;
}




// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }