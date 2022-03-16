/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:36:00 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/21 13:36:01 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
// # include "ShrubberyCreationForm.hpp"
// # include "PresidentialPardonForm.hpp"
// # include "RobotomyRequestForm.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form
{

	public:

		Form();
		Form( Form const & src );
		Form(std::string name, int gradeSign, int gradeExecute);
		virtual ~Form();
		Form &operator=(Form const &src);

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void		signCheck(Bureaucrat const &bureaucrat);
		virtual void		execute(Bureaucrat const& executor) = 0;

	class GradeTooHighException: public std::exception{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException: public std::exception{
		public:
			const char* what() const throw();
	};
		
	class DoNotExecuteException: public std::exception{
		public:
			const char* what() const throw();
	};

	class FormNotSignedException: public std::exception{
			virtual const char* what() const throw();
	};
	private:
		const std::string	_fname;
		const int 			_GradeToSign;
		const int 			_GradeToExecute;
		bool 				_signed;
		// std::string			_target;


};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */