/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:48:18 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/08 17:48:18 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(Cat const &other);
        Cat& operator=(Cat const &other);
        ~Cat();

        void makeSound( void ) const;
        Brain*	getBrain(void) const;
};

#endif
