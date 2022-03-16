#ifndef FORM_HPP
# define FORM_HPP
// # include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form
{

	public:

		Form();
		Form( Form const & src );
		Form(std::string name, int gradeSign, int gradeExecute);
		~Form();
		Form &operator=(Form const &src);

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void		signCheck(Bureaucrat const &bureaucrat);

	private:
		const std::string _fname;
		const int _GradeToSign;
		const int _GradeToExecute;
		bool _signed;

	class GradeTooHighException: public std::exception{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException: public std::exception{
		public:
			const char* what() const throw();
	};
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */