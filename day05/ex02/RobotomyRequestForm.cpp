/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 21:43:30 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/21 13:19:27 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm():
	Form("RobotomyRequestForm", 72, 45), _target("Unknown")
{
	std::cout << "RobotomyRequestForm Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ):
	Form("RobotomyRequestForm", 72, 45), _target(src._target)
{
	std::cout << "RobotomyRequestForm copy Constructor called." << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	std::cout << "RobotomyRequestForm equal operator called." << std::endl;
	if(this != &rhs)
		this->_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	RobotomyRequestForm::execute(Bureaucrat const &executor){
	if (getIsSigned() == false){
			std::cout << executor << " can't execute " << this->getName() << "." << std::endl;
			throw FormNotSignedException();
		}
		if (getGradeToExecute() < executor.getGrade()){
			std::cout << executor << " can't execute " << this->getName() << "." << std::endl;
			throw Bureaucrat::GradeTooLowException();
		}
		std::cout << "DRRRRRRRRIIIIIILLLLLLLLLLL" << std::endl;
		srand(time(NULL));
		if ((rand() % 2) == 0)
			std::cout << getTarget() << " has been robotized !" << std::endl;
		else
			std::cout << "Robotization failed !" << std::endl;
		std::cout << "DRRRRRRRRIIIIIILLLLLLLLLLL" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

/* ************************************************************************** */