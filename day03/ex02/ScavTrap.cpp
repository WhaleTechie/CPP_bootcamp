/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:41:35 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/27 16:41:38 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the constructor, destructor, and attack have to use different outputs. 

#include "ScavTrap.hpp"


          /******************/
         /*  Constructors  */
        /******************/

    ScavTrap::ScavTrap() 
        : ClapTrap() {
    std::cout << "ScavTrap " << _name << " is born!" << std::endl;        
        };

    ScavTrap::ScavTrap(std::string name)
        : ClapTrap(name) {
            _hitpoints = 100;
            _energypoints = 50;
            _attack_damage = 20;
        std::cout << "ScavTrap " << _name << " is born!" << std::endl;    
        };

    ScavTrap::ScavTrap(ScavTrap const &other) {
        *this = other;
    };

          /******************/
         /*  = overload    */
        /******************/

    ScavTrap& ScavTrap::operator=(ScavTrap const &other){
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

    ScavTrap::~ScavTrap(){
            std::cout << "ScavTrap " << this->_name << " has been destroyed." << std::endl;
    };
          /********************/
         /* member functions */
        /********************/

    void ScavTrap::attack(std::string const & target){
        std::cout << "ScavTrap " << this->_name << " attacks " << target << std::endl;
    };

    void ScavTrap::guardGate() {
        std::cout << " ScavTrap have enterred in Gate keeper mode." << std::endl;
    };
