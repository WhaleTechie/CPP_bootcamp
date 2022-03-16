/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 06:13:26 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/21 11:45:28 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		virtual ~Intern();
		Intern(Intern const &src);
		Intern &operator=(Intern const &src);
		Form *makeForm(std::string reqName, std::string target);

	private:
		typedef Form* (*reqFunc)(std::string const&);
		struct internForm {
			std::string name;
			reqFunc		req;
		};
		internForm formList[3];
};

Form *createSCF(std::string const &target);
Form *createRRF(std::string const &target);
Form *createPPF(std::string const &target);


#endif /* ********************************************************** INTERN_H */