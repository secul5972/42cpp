/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:57:48 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 10:55:17 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("ShrubberyCreationForm", 145, 137), target(_target)
{
    std::cout << "ShrubberyCreationForm default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform) : Form("ShrubberyCreationForm", 145, 137), target(shrubberycreationform.target)
{
	std::cout << "ShrubberyCreationForm copy constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberycreationform)
{
	target = shrubberycreationform.target;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	if (this->getIsSigned() == false)
		throw Form::UnSignedException();
	else if (this->getEgrade() < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	else
	{
		std::ofstream file((this->target + "_shruberry").c_str());
		file << "  *  \n *** \n*****\n  *  \n  *  \n *** \n";
		std::cout << target << " " << this->getName() << " is executed\n";
		file.close();
	}
}