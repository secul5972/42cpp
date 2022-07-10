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
			bb->beSigned(bure);
			bure.executeForm(*bb);
			delete bb;
			std::cout << "------------------------------------------------------\n";
		}
		if (cc)
		{
			std::cout << "------------------------------------------------------\n";
			cc->beSigned(bure);
			bure.executeForm(*cc);
			delete cc;
			std::cout << "------------------------------------------------------\n";
		}
		if (dd)
		{
			std::cout << "------------------------------------------------------\n";
			dd->beSigned(bure);
			bure.executeForm(*dd);
			delete dd;
			std::cout << "------------------------------------------------------\n";
		}
		if (ee)
		{
			std::cout << "------------------------------------------------------\n";
			ee->beSigned(bure);
			bure.executeForm(*ee);
			delete bb;
			std::cout << "------------------------------------------------------\n";
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";
}