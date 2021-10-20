/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:31:08 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 14:31:11 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void){
    Zombie one = Zombie("Lidia");
    Zombie *zptr = newZombie("newZLidia");
    

    if(!zptr)
        return (1);
    one.announce();
    zptr->announce();
    randomChump("chump");

    delete zptr; //as free in C
    return (0); //first and chump destroyed
}
