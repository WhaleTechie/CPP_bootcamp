/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:03:01 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/27 20:03:04 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"


class FragTrap : public ClapTrap 
{
private:
    
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &other);
    FragTrap& operator=(FragTrap const &other);
    ~FragTrap();

    // void attack(std::string const & target);
    void highFivesGuys(void);
};

#endif
