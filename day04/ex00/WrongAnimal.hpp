/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:19:52 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/07 21:19:52 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>
# define EN "\033[0m"


class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string const &type);
        WrongAnimal(WrongAnimal const &other);
        WrongAnimal& operator=(WrongAnimal const &other);
        ~WrongAnimal();

        std::string getType( void ) const;
		void makeSound( void ) const;
};


#endif
