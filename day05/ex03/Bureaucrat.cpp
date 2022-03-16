/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:46:49 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/20 21:49:01 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat():_name("Ivan Ivanov"), _grade(LOW_GR)
{
	std::cout << "Default Bureaucrat was created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) 
{
	std::cout << "Bureaucrat Constructor called with name " << _name << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ): _name(src.getName()), _grade(src.getGrade())
{
	std::cout << "Bureaucrat copy Constructor called." << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	std::cout << "Bureaucrat equal operator called." << std::endl;
	if (this != &src)
	{
		if (src._grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (src._grade > 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade = src._grade;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & os, Bureaucrat const & i )
{
	os <<  "name is "<< i.getName() << ", " << "grade is " << i.getGrade() << ".";
	return os;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too High!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low!");
}

void Bureaucrat::increase()
{
	if (this->_grade - 1 < HIGH_GR)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void Bureaucrat::decrease()
{
	if (this->_grade +1 > LOW_GR)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

void	Bureaucrat::signForm(Form& toSign){
	try
	{
		toSign.signCheck(*this);
		std::cout << this->getName() << " signs " << toSign.getName() << "." << std::endl;
		}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot signs " << toSign.getName() << " because ";
		std::cerr << e.what() <<  std::endl;
	}
		
}

void	Bureaucrat::executeForm(Form& toExec){
	try
	{
		toExec.execute(*this);
		std::cout << this->getName() << " executes " << toExec.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot executes " << toExec.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string Bureaucrat::getName() const
{
	return this->_name;	
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

/* ************************************************************************** */