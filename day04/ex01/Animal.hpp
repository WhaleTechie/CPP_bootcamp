/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:11:03 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/06 19:11:03 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>
# define EN "\033[0m"


class Animal {
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string const &type);
        Animal(Animal const &other);
        Animal& operator=(Animal const &other);
        virtual ~Animal();

        std::string getType( void ) const;
		virtual void makeSound( void ) const;
};


#endif
