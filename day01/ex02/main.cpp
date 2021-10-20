/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:33:38 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 19:33:44 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// create a string containing "HI THIS IS BRAIN".
// stringPTR which is a pointer to the string; 
// and a stringREF which is a reference to the string.

// display the address in memory of the string. 
// display the address of the string by using stringPTR and stringREF.
// display the string using the pointer, 
// display it using the reference.
#include <iostream>

int main(void){
	
	std::string 	str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "the address in memory of the string           " << &str << std::endl;
	std::cout << "the address of the string by using stringPTR  " << &stringPTR << std::endl;
	std::cout << "the address of the string by using stringREF  " << &stringREF << std::endl;
	
	std::cout << "string:                     " << str << std::endl;
	std::cout << "string using the pointer:   " << *stringPTR << std::endl;
	std::cout << "string using the reference: " << stringREF << std::endl;
	return (0);
}
