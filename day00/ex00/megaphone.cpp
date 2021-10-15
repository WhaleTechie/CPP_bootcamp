/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:02:02 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/14 18:35:17 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//$>./megaphone "shhhhh... I think the students are asleep..."
//SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
//		$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
//DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
//$>./megaphone
//		* LOUD AND UNBEARABLE FEEDBACK NOISE *
//$>

#include <cctype>
#include <iostream>
int    main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)toupper(av[i][j]);
			std::cout << " " ;
		}
		std::cout << std::endl;
	}
	return (0);
}


