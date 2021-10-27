/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:07:31 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/26 14:07:34 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void) {
	
	ClapTrap	nameless;
	ClapTrap	mine("Lidia");
    // std::cout << "Constructor copy" << std::endl;
	// ClapTrap	minecopied(mine);

    // std::cout << "Assignment " << std::endl;
	// ClapTrap CopyClap = mine;

    std::cout << "===TESTING ATTACK=== " << std::endl;
	mine.attack("hearts");
	nameless.attack("spades");

	std::cout << "===TESTING ENERGY POINTS== " << std::endl;
	nameless.attack("hearts");
    nameless.attack("hearts");
    nameless.attack("hearts");
    nameless.attack("hearts");
    nameless.attack("hearts");
    nameless.attack("hearts");
    nameless.attack("hearts");
    nameless.attack("hearts");

	std::cout << "===TAKING DAMAGE== " << std::endl;
	mine.takeDamage(4u);
	nameless.takeDamage(3u);

	std::cout << "===TESTING REPAIRING== " << std::endl;
	mine.beRepaired(4u);
	nameless.beRepaired(4u);

	return (0);
}


