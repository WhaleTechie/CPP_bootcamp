/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:47:19 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/15 19:47:19 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void	Intern_test(std::string const &name, std::string const &target)
{
	Intern  someRandomIntern;
	Form* rrf;
	Bureaucrat internB("Burokratik", 42);

	rrf = someRandomIntern.makeForm(name, target);
	if (rrf)
	{
		try
		{
			std::cout << internB;
			internB.signForm(*rrf);
			std::cout << *rrf << std::endl;
			internB.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete rrf;
	}
	std::cout << std::endl;
}

int		main()
{
	Intern_test("Robotomy request", "Bender");
	Intern_test("Shrubbery Creation", "Dender");
	Intern_test("Presidential Pardon", "Cender");
	Intern_test("UnknownForm", "Aender");
}