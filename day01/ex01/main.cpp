/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:31:38 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 19:31:44 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    Zombie Zmb("first_Zombie");
	Zombie	*Horde;
	int		i;
    int     nmbr;

    nmbr = 10;
	Horde = zombieHorde(nmbr, "ZombieTeam");
    Zmb.announce();
	i = -1;
	while (++i < nmbr)
	{
		Horde[i].announce();
	}
	delete [] Horde;
	return (0);
}
