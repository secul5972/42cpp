/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:39:43 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 11:02:55 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{

	try
	{
		Intern aa;
		Form *bb, *cc, *dd, *ee;
		Bureaucrat bure("bure", 3);
		bb = aa.makeForm("ShrubberyCreationForm", "bb");
		cc = aa.makeForm("RobotomyRequestForm", "cc");
		dd = aa.makeForm("PresidentialPardonForm", "dd");
		ee = aa.makeForm("aaa", "ee");

		if (bb)
		{
			std::cout << "------------------------------------------------------\n";
			bure.signForm(*bb);
			bure.executeForm(*bb);
			delete bb;
			std::cout << "------------------------------------------------------\n";
		}
		if (cc)
		{
			std::cout << "------------------------------------------------------\n";
			bure.signForm(*cc);
			bure.executeForm(*cc);
			delete cc;
			std::cout << "------------------------------------------------------\n";
		}
		if (dd)
		{
			std::cout << "------------------------------------------------------\n";
			bure.signForm(*dd);
			bure.executeForm(*dd);
			delete dd;
			std::cout << "------------------------------------------------------\n";
		}
		if (ee)
		{
			std::cout << "------------------------------------------------------\n";
			bure.signForm(*ee);
			bure.executeForm(*ee);
			delete bb;
			std::cout << "------------------------------------------------------\n";
		}
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";
}