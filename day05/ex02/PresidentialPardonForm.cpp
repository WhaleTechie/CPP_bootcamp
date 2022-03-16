/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 21:43:12 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/21 13:35:44 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm():
	Form("PresidentialPardonForm", 25, 5), _target("Unknown")
{
	std::cout << "PresidentialPardonForm Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ):
Form("PresidentialPardonForm", 25, 5), _target(src._target)
{
	std::cout << "PresidentialPardonForm copy Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm Constructor called." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & src )
{
	std::cout << "PresidentialPardonForm equal operator called." << std::endl;
	if(this != &src)
		this->_target = src._target;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute(Bureaucrat const &executor){
	if (getIsSigned() == false){
		std::cout << executor << " can't execute " << this->getName() << "." << std::endl;
		throw FormNotSignedException();
	}
	if (getGradeToExecute() < executor.getGrade()){
		std::cout << executor << " can't execute " << this->getName() << "." << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << getTarget() << " has been forgiven by Zafob Beeblebrox !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

/* ************************************************************************** */