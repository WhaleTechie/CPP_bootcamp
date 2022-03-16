/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:46:58 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/21 05:39:58 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include "Form.hpp"
# include <exception>
# include <iostream>
# include <string>
# define HIGH_GR 1
# define LOW_GR 150


class Form;

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		virtual ~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );
		
		std::string	getName() const; 
		int			getGrade() const;
		void		increase();
		void		decrease();
		void		signForm(Form& toSign);
		void		executeForm(Form& toExec);

class GradeTooHighException: public std::exception{
		public:
			const char* what() const throw();
	};

class GradeTooLowException: public std::exception{
		public:
			const char* what() const throw();
	};
	
	private:
		std::string	_name;
		int			_grade;

	
};

std::ostream &			operator<<( std::ostream & os, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */