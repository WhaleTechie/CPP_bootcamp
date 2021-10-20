/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:30:54 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 14:30:57 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

    private:
        std::string _name;
    public:
        Zombie( std::string name);
        ~Zombie();
        void announce ();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif