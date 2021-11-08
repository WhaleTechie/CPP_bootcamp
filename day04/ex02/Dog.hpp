/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:48:30 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/08 17:48:30 by lkrinova         ###   ########.fr       */
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