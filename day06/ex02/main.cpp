/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:18:50 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/22 21:18:50 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
    public:
        virtual ~Base();
};

Base::~Base() {}

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void)
{
    srand(time(NULL));
    int rnd;

    rnd = rand() % 3;
    switch (rnd)
    {
        case 0:
            std::cout << "A created!\n";
            return new A();
        case 1:
            std::cout << "B created!\n";
            return new B();
        case 2:
            std::cout << "C created!\n";
            return new C();
        default:
            break;
    }
    return NULL;
}

void identify(Base* p) {
	if (dynamic_cast<B*>(p))
		std::cout << "B identified" << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << "A identified" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C identified" << std::endl;
}

void identify(Base &p)
{
    try {
		(void)dynamic_cast<A &>(p);
        std::cout << "A it is!" << std::endl;
		return ;
	} catch (std::exception &) {}
	try {
    	(void)dynamic_cast<B &>(p);
        std::cout << "B it is!" << std::endl;
		return ;
	} catch (std::exception &) {}
	try {
    	(void)dynamic_cast<C &>(p);
        std::cout << "C it is!" << std::endl;
		return ;
	} catch (std::exception &) {}	

}

int main(void)
{
    Base *b_ptr;

    b_ptr = generate();
    identify(*b_ptr);
    identify(b_ptr);
    delete b_ptr;
    return 0;
}