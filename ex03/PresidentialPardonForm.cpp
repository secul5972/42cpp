/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:58:10 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 10:55:26 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form("PresidentialPardonForm", 25, 5), target(_target)
{
	std::cout << "PresidentialPardonForm default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform) : Form("PresidentialPardonForm", 25, 5), target(presidentialpardonform.target)
{
	std::cout << "PresidentialPardonForm copy constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialpardonform)
{
	target = presidentialpardonform.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
	if (this->getIsSigned() == false)
		throw Form::UnSignedException();
	else if (this->getEgrade() < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	else
		std::cout << target << " has been pardoned by Zafod Beeblebrox!\n";

}