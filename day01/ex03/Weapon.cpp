/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:58:11 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 19:58:12 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type): _type(type) {}

Weapon::~Weapon(){}

void Weapon::setType (std::string type)
{
    this->_type = type;
}

const std::string& Weapon::getType (void) {
    const std::string& rf = this->_type;
    return (rf);
}