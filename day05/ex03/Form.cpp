#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <exception>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _fname("new-form"), _GradeToSign(50), _GradeToExecute(50), _signed(false) {
}

Form::Form(const std::string name, const int grade_required_to_sign, const int grade_required_to_execute): 
_fname(name), _GradeToSign(grade_required_to_sign), _GradeToExecute(grade_required_to_execute), _signed(false){
	if (grade_required_to_sign < 1 || grade_required_to_execute < 1)
    	throw GradeTooHighException();
	else if (150 < grade_required_to_sign || 150 < grade_required_to_execute)
    	throw GradeTooLowException();
}

Form::Form( const Form & src )
	: _fname(src._fname), _GradeToSign(src._GradeToSign),
      _GradeToExecute(src._GradeToExecute),
      _signed(src._signed) {
	  }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
  if (this != &rhs) {
    this->_signed = rhs.getIsSigned();
  }
  return *this;
}


std::ostream &			operator<<( std::ostream & os, Form const & i )
{
  os << "Form " << i.getName()
      << ", grade required to sign is " << i.getGradeToSign()
      << ", grade required to execute is " << i.getGradeToExecute()
      << ", signed status is " << i.getIsSigned() << ".";
  return os;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too High!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low!");
}

const char *Form::DoNotExecuteException::what() const throw()
{
	return ("The form cannot be executed because it is not signed.");
}

char const* Form::FormNotSignedException::what() const throw(){
	return ("Form not signed yet !");
}

void	Form::signCheck(Bureaucrat const &bureaucrat)
{
	if (this->_GradeToSign >= bureaucrat.getGrade())
		this->_signed= true;
	else
		throw Form::GradeTooLowException();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Form::getName() const {
	return _fname;
	}

int Form::getGradeToSign() const {
	return _GradeToSign;
	}

int Form::getGradeToExecute() const {
	return _GradeToExecute;
	}

bool Form::getIsSigned() const { 
	return _signed;
}

/* ************************************************************************** */