/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:42:28 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/27 16:42:31 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
protected:
    std::string     _name;
    unsigned int    _hitpoints;
    unsigned int    _energypoints;
    unsigned int    _attack_damage;
    
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &other);
    ClapTrap& operator=(ClapTrap const &other);
    ~ClapTrap();

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif
