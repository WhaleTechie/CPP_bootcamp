/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:41:50 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/27 16:41:53 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap 
{
private:
    
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &other);
    ScavTrap& operator=(ScavTrap const &other);
    ~ScavTrap();

    void attack(std::string const & target);
    void guardGate();
};

#endif
