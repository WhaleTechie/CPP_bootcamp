/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:57:29 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 19:57:31 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB 
{
    private:
        std::string	_name;
        Weapon		*_type;

    public:
        void	attack(void);
        void	setWeapon(Weapon &type);
        HumanB(std::string name);
        ~HumanB();
};

#endif