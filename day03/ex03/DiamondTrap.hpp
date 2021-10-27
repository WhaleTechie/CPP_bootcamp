/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 21:07:34 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/27 21:07:37 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
#define DIAMOND_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(ScavTrap const &other);
    DiamondTrap& operator=(DiamondTrap const &other);
    ~DiamondTrap();
};

#endif
