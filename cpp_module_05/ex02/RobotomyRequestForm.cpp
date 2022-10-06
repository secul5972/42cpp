/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:47:30 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 10:53:13 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("RobotomyRequestForm", 72, 45), target(_target)
{
	std::cout << "RobotomyRequestForm default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyrequestform) : Form("RobotomyRequestForm", 72, 45), target(robotomyrequestform.target)
{
	std::cout << "RobotomyRequestForm copy constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyrequestform)
{
	target = robotomyrequestform.target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() == false)
		throw Form::UnSignedException();
	else if (this->getEgrade() < executor.getGrade())
		throw Form::GradeTooLowException();
	else
	{
		std::srand(std::time(NULL));
		std::cout << "drilling noise\n";
		if (rand() % 2 == 0)
			std::cout << target + " has been robotomized\n";
		else
			std::cout << target + ", failed to be robotomized\n";
	}
}