/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:31:21 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 19:31:28 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie*	ZombieHorde;
	int		i;

	if (N < 1)
		return (NULL);
	ZombieHorde = new Zombie[N];
  	
	i = -1;
	while (++i < N)
	{
		ZombieHorde[i].setName(name);
	}
	return (ZombieHorde);
}
