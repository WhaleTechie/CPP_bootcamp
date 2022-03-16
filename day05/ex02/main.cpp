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

#include "Bureaucrat.hpp"
#include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

#define CLR "\x1B[31m"
#define ENCLR "\033[0m"

int		main()
{
	try{
		std::cout << "\033[34;1mCan sign but not execute\033[0m" << std::endl;
		PresidentialPardonForm	form("target1");
		Bureaucrat				bob("Bob", 24);

		std::cout << form << std::endl;
		std::cout << bob << std::endl << std::endl;

		bob.signForm(form);
		bob.executeForm(form);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	try{
		std::cout << std::endl << "\033[34;1mCan execute but not sign\033[0m" << std::endl;
		PresidentialPardonForm	form("target2");
		Bureaucrat				bob("Bob", 1);

		std::cout << form << std::endl;
		std::cout << bob << std::endl << std::endl;

		bob.executeForm(form);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	try{
		std::cout << std::endl << "\033[34;1mCan't sign\033[0m" << std::endl;
		RobotomyRequestForm		form("target3");
		Bureaucrat				bob("Bob", 79);

		std::cout << form << std::endl;
		std::cout << bob << std::endl << std::endl;

		bob.signForm(form);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	try{
		ShrubberyCreationForm	form1("target4");
		PresidentialPardonForm	form2("target5");
		RobotomyRequestForm		form3("target6");
		Bureaucrat				bob("Bob", 1);

		std::cout << std::endl << "\033[34;1mAll forms and very high Burokratik\033[0m" << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
		std::cout << bob << std::endl << std::endl;

		std::cout << std::endl << "\033[34;1mCan sign all forms\033[0m" << std::endl;
		bob.signForm(form1);
		bob.signForm(form2);
		bob.signForm(form3);

		std::cout << std::endl << "\033[34;1mCan execute all forms\033[0m" << std::endl;
		std::cout << "\033[33mShrubberyCreationForm\033[0m" << std::endl;
		bob.executeForm(form1);

		std::cout << "\033[33mPresidentialPardonForm\033[0m" << std::endl;
		bob.executeForm(form2);

		std::cout << "\033[33mRobotomyRequestForm\033[0m" << std::endl;
		bob.executeForm(form3);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	return (0);
}