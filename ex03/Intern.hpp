/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:25:29 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/09 21:02:44 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	Form *makeShrubberyCreationForm(const std::string& target);
	Form *makeRobotomyRequestForm(const std::string& target);
    Form *makePresidentialPardonForm(const std::string& target);
public:
	Intern();
	Intern(const Intern &intern);
	~Intern();
	Intern &operator=(const Intern &intern);

	Form *makeForm(const std::string &formname, const std::string &target);
};

#endif