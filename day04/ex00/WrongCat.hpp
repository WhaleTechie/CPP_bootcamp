/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:23:29 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/07 21:23:29 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    private:

    public:
        WrongCat();
        WrongCat(WrongCat const &other);
        WrongCat& operator=(WrongCat const &other);
        ~WrongCat();

        void makeSound( void ) const;
};

#endif
