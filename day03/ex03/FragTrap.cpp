/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:02:51 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/27 20:02:54 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// class will have its construction and destruction messages 

#include "FragTrap.hpp"


          /******************/
         /*  Constructors  */
        /******************/

    FragTrap::FragTrap() 
        : ClapTrap() {
    std::cout << "FragTrap " << _name << " is born!" << std::endl;        
        };

    FragTrap::FragTrap(std::string name)
        : ClapTrap(name) {
            _hitpoints = 100;
            _energypoints = 100;
            _attack_damage = 30;
        std::cout << "FragTrap " << _name << " is born!" << std::endl;    
        };

    FragTrap::FragTrap(FragTrap const &other) {
        *this = other;
    };

          /******************/
         /*  = overload    */
        /******************/

    FragTrap& FragTrap::operator=(FragTrap const &other){
        this->_name = other._name;
        this->_hitpoints = other._hitpoints;
        this->_energypoints = other._energypoints;
        this->_attack_damage = other._attack_damage;
        std::cout << "ScavTrap "<< this->_name << " operator= is called" << std::endl;
        return *this;
    };

          /******************/
         /*    Destructor  */
        /******************/

    FragTrap::~FragTrap(){
            std::cout << "FragTrap " << this->_name << " has been destroyed." << std::endl;
    };
          /********************/
         /* member functions */
        /********************/

    void FragTrap::highFivesGuys(void) {
        std::cout << " Hey-hey! High-Five!." << std::endl;
    }
