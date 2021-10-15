/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:24:50 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/15 19:24:53 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main() {
	std::string	input;
	Phonebook awesomepb;

	std::cout << "* W   E   L   C   O   M   E * " << std::endl;
	std::cout << "*  to my Awesome Phonebook  *" << std::endl;
	std::cout << "* Enter your command [ADD | SEARCH | EXIT]:" << std::endl;
	while (42)
	{
		std::cout << "> ";
		getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			awesomepb.add_contact();
		else if (input == "SEARCH")
			awesomepb.search();
	}
	return (0);

}
