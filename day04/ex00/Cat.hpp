/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:12:25 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/06 19:12:25 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: public Animal {
    private:

    public:
        Cat();
        Cat(Cat const &other);
        Cat& operator=(Cat const &other);
        ~Cat();

        void makeSound( void ) const;
};

#endif
