/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:56:55 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 19:56:57 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void) {
	std::cout << this->_name << " attacks with his " << this->_type.getType() << std::endl;
}

HumanA::HumanA (std::string Name, Weapon& Weapon) : _name(Name), _type(Weapon) {
	return ;
}

HumanA::~HumanA (void) {
	return ;
}