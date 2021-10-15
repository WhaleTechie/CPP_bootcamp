/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:23:42 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/15 19:23:50 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <sstream>
# define MAX_SIZE_PH 8

class Phonebook {

private:
	int _count;
	Contact	_contacts[MAX_SIZE_PH]
public:
	Phonebook();
	~Phonebook();
	Contact phonebook[8];
};


#endif //DAY00_PHONEBOOK_H
