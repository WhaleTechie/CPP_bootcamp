/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:12:32 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/08 15:36:00 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain() {
	std::cout << "Default Brain constructor was called \t@@@@:|" << std::endl;
}

Brain::Brain( const Brain & src ) {
	std::cout << "Brain copy constructor was called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain(){
	std::cout << "Brain destructor was called \t@@@@:|" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs ) {
		for (int i = 0; i < 100; ++i)
        _ideas[i] = rhs.getIdea(i);
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Brain const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Brain::getIdea(int i) const
{
    if (i < 0 || i >= 100)
		return (NULL);
    return (_ideas[i]);
}

void Brain::setIdea(int i, const std::string &idea) {
    if (i < 0 || i >= 100)
		return ;
    this->_ideas[i] = idea;
}
/* ************************************************************************** */