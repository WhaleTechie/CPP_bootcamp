/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:58:20 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 19:58:23 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

// Make a Weapon class, that has 
// a type string, 
// a getType method that returns a const reference to this string. 
// a setType, of course!

class Weapon {
    private:
        std::string _type;
    
    public:
        const std::string   &getType();
        void                setType(std::string type);
        Weapon(std::string type);
	    ~Weapon(void);

};

#endif