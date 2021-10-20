/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:30:39 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 14:30:42 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {}

void Zombie::announce() {
    std::cout << _name << " BraiiiiiiinnnzzzZ" << std::endl;
}

Zombie::~Zombie(){
    std::cout << _name << " was destroyed" << std::endl;
}
