/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:39:43 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/09 21:14:37 by secul5972        ###   ########.fr       */
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
	
	std::cout << "------------------------------------------------------\n";

	try
	{
		Intern aa;
		Form *bb, *cc, *dd, *ee;
		Bureaucrat bure("bure", 3);
		bb = aa.makeForm("ShrubberyCreationForm", "bb");
		cc = aa.makeForm("RobotomyRequestForm", "cc");
		dd = aa.makeForm("PresidentialPardonForm", "dd");
		ee = aa.makeForm("aaa", "ee");
		bb->beSigned(bure);
		cc->beSigned(bure);
		dd->beSigned(bure);
		if (ee)
			ee->beSigned(bure);
		bure.executeForm(*bb);
		bure.executeForm(*cc);
		bure.executeForm(*dd);
		delete bb;
		delete cc;
		delete dd;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";
}