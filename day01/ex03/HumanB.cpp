/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:57:19 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 19:57:21 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void) {
	if (!_type)
		std::cout << this->_name << " attacks without any weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_type->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& type) {
	this->_type = &type;
}

HumanB::HumanB (std::string Name) : _name(Name), _type(NULL) {
	return ;
}

HumanB::~HumanB (void) {
	return ;
}
