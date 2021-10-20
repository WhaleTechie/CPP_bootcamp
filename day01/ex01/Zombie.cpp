/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:30:45 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 19:30:51 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void) : _name("default") {}

Zombie::Zombie( std::string name ) : _name(name) {}

Zombie::~Zombie(){
    std::cout << _name << " was destroyed" << std::endl;
}

void Zombie::announce() {
    std::cout << _name << " BraiiiiiiinnnzzzZ" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}
