	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:25:33 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/09 20:25:34 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << "\n";
}

Intern::Intern(const Intern &intern)
{
	std::cout << "Intern default constructor called" << "\n";
	*this = intern;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << "\n";
}

Intern &Intern::operator=(const Intern &intern)
{
	*this = intern;
	return *this;
}

Form *Intern::makeShrubberyCreationForm(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequestForm(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentialPardonForm(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(const std::string &formname, const std::string &target)
{
	const std::string formnames[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};

	Form *(Intern::*forms[3])(const std::string &target) = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (formname == formnames[i])
		{
			std::cout << "Intern creates " << formname << "\n";
			return (this->*forms[i])(target);
		}
	}
	std::cout << "Intern does not know " + formname << "\n";
	return NULL;
}