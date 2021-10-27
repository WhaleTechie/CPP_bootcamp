/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:42:11 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/27 20:03:23 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(){
    this->_name = "default";
    this->_hitpoints = 10;
    this->_energypoints = 10;
    this->_attack_damage = 0;
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
 };
    
ClapTrap::ClapTrap(std::string name) {
    this->_name = name;
    this->_hitpoints = 10;
    this->_energypoints = 10;
    this->_attack_damage = 0;
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;    
    };

ClapTrap &ClapTrap::operator=(ClapTrap const &other){
    this->_name = other._name;
    this->_hitpoints = other._hitpoints;
    this->_energypoints = other._energypoints;
    this->_attack_damage = other._attack_damage;
    std::cout << "ClapTrap "<< this->_name << " operator= is called" << std::endl;
    return *this;
};

ClapTrap::ClapTrap(ClapTrap const &other) {
    *this = other;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << this->_name << " has been destroyed." << std::endl;
};

void ClapTrap::attack(std::string const & target){
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << _attack_damage <<" points of damage!" <<std::endl;
};

void ClapTrap::takeDamage(unsigned int amount){
    if (this->_energypoints <= amount) {
		std::cout << this->_name << " is dead" << std::endl;
		this->_energypoints = 0;
	}
	else {
		this->_energypoints -= amount;
		std::cout << " " << this->_name << \
			" takes Damage " << amount << ", remaning hp is " \
			<< this->_energypoints << std::endl;
	}
};

void ClapTrap::beRepaired(unsigned int amount){
    this->_energypoints += amount;
	std::cout << " " << this->_name << " is repaired by " << amount 
    << " and remaning hp is " << this->_energypoints << std::endl;
};
