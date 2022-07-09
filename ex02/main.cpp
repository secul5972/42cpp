/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:39:43 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/09 20:19:25 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm aa("aa");
	RobotomyRequestForm bb("bb");
	PresidentialPardonForm cc("cc");
	Bureaucrat bure("Bure", 50);
	Bureaucrat aucrat("aucrat", 3);
	
	std::cout << aa << "\n";
	std::cout << bb << "\n";
	std::cout << cc << "\n";
	std::cout << bure << "\n";
	
	std::cout << "------------------------------------------------------\n";

	try
	{
		bure.executeForm(aa);
		bure.executeForm(bb);
		bure.executeForm(cc);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";

	try
	{
		aa.beSigned(bure);
		bure.executeForm(aa);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";


	try
	{
		bb.beSigned(bure);
		bure.executeForm(bb);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";
	
	try
	{
		aa.beSigned(aucrat);
		bb.beSigned(aucrat);
		cc.beSigned(aucrat);
		aucrat.executeForm(aa);
		aucrat.executeForm(bb);
		aucrat.executeForm(cc);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";
}