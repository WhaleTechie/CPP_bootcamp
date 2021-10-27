/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:43:32 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/27 16:43:34 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void) {
	
	ClapTrap	nameless;
	ClapTrap	mine("Lidia");
	std::cout << std::endl << "===TESTING HERITAGE=== " << std::endl;
	ScavTrap	def;
	ScavTrap	second("Lida2");

    // std::cout << "Constructor copy" << std::endl;
	// ClapTrap	minecopied(mine);

    // std::cout << "Assignment " << std::endl;
	// ClapTrap CopyClap = mine;

    std::cout << std::endl << "===TESTING ATTACK=== " << std::endl;
	mine.attack("ScavTrap");
	nameless.attack("spades");
	std::cout << std::endl << "===TESTING ATTACK of a child class instances === " << std::endl;
	def.attack("ClapTrap class");
	second.attack("somebody else");

	std::cout << std::endl << "===TAKING DAMAGE== " << std::endl;
	mine.takeDamage(4u);
	nameless.takeDamage(3u);
	std::cout << "===CHILD CLASS instances TAKING DAMAGE== " << std::endl;
	def.takeDamage(2);
	second.takeDamage(3);

	std::cout << std::endl << "===TESTING REPAIRING== " << std::endl;
	mine.beRepaired(4u);
	nameless.beRepaired(4u);
	std::cout << std::endl << "===CHILD CLASS INSTANCES TESTING REPAIRING== " << std::endl;
	def.beRepaired(2);
	second.beRepaired(3);

	std::cout << std::endl << "===DESTRUCTORS=== " << std::endl;	
	return (0);
}


