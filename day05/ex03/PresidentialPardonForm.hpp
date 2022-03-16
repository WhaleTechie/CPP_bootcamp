/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 21:43:22 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/21 05:55:40 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <string>

# include "Form.hpp"

// class Bureaucrat;

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(std::string target);

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		std::string getTarget() const;
		virtual void	execute(Bureaucrat const &executor);
	private:
		std::string _target;
};


#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */