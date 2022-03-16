/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 21:43:43 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/21 13:21:51 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("ShrubberyCreationForm", 145, 137), _target("Unknown")
{
	std::cout << "ShrubberyCreationForm Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):
	Form("ShrubberyCreationForm", 145, 137), _target(src._target)
{
	std::cout << "ShrubberyCreationForm copy Constructor called." << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	std::cout << "ShrubberyCreationForm equal operator called." << std::endl;
	if(this != &rhs)
		this->_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute(Bureaucrat const& by){
	if (getIsSigned() == false){
		std::cout << by << " can't execute " << *this << "." << std::endl;
		throw FormNotSignedException();
	}
	if (getGradeToExecute() < by.getGrade()){
		std::cout << by << " can't execute " << *this << "." << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	std::ofstream myFile;

	myFile.open(getTarget().data());
	myFile << "         #o#" << std::endl;
	myFile << "       ####o#" << std::endl;
	myFile << "      #o# \\#|_#,#" << std::endl;
	myFile << "     ###\\ |/   #o#" << std::endl;
	myFile << "      # {}{      #" << std::endl;
	myFile << "         }{{" << std::endl;

	myFile.close();
	std::cout << "A shrub has been planted in " << getTarget() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

/* ************************************************************************** */