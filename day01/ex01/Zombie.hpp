/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:31:01 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 19:31:06 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

    private:
        std::string _name;
    public:
        Zombie (void);
        Zombie( std::string name);
        ~Zombie();
        void announce ();
        void 	setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
#endif
