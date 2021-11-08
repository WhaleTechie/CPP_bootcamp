/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:12:32 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/06 19:12:32 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(Dog const &other);
        Dog& operator=(Dog const &other);
        ~Dog();

        void makeSound( void ) const;
        Brain*	getBrain(void) const;
};

#endif