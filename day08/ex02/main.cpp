/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:52:11 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/28 23:52:13 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "mutantstack.cpp"
#include <list>
#include <vector>
#include <stack>
#include <ctime>



# define RESET			"\e[0m"
# define CYAN			"\e[0;36m"
# define PURPLE			"\e[0;38;5;93m"
# define LILAC			"\e[0;38;5;13m"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}

    std::stack<int> s(mstack);
	MutantStack<int> s1(mstack);

    MutantStack<int>::iterator it2 = s1.begin();
	MutantStack<int>::iterator ite2 = s1.end();
    std::cout << "mstack copy content  " << std::endl;
    while (it2 != ite2)
	{
	    std::cout << *it2 << std::endl;
	    ++it2;
	}
	
    MutantStack<int> s2(s1);
    MutantStack<int>::const_iterator it3 = s2.begin();
	MutantStack<int>::const_iterator ite3 = s2.end();
    std::cout << "mstack 2nd copy content with const iterator" << std::endl;
    while (it3 != ite3)
	{
	    std::cout << *it3 << std::endl;
	    ++it3;
	}
	return(0);
}


