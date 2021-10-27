/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:07:58 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/26 14:08:01 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>


class ClapTrap
{
private:
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

    void getinfo();
};

#endif