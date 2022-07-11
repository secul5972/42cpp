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

	Bureaucrat bure("Bure", 50);
	Bureaucrat aucrat("aucrat", 3);
	std::cout << bure << "\n";
	std::cout << aucrat << "\n";
	
	std::cout << "------------------------------------------------------\n\n";

	try
	{
		ShrubberyCreationForm aa("aa");
		RobotomyRequestForm bb("bb");
		PresidentialPardonForm cc("cc");

		std::cout << "[-----------------------------------------------------]\n";

		std::cout << aa << "\n";
		std::cout << bb << "\n";
		std::cout << cc << "\n";

		bure.executeForm(aa);
		bure.executeForm(bb);
		bure.executeForm(cc);

		std::cout << "[-----------------------------------------------------]\n";
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n------------------------------------------------------\n\n";

	try
	{
		ShrubberyCreationForm aa("aa");
		
		std::cout << "[-----------------------------------------------------]\n";

		bure.signForm(aa);
		bure.executeForm(aa);
		
		std::cout << "[-----------------------------------------------------]\n";
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n------------------------------------------------------\n\n";


	try
	{
		RobotomyRequestForm bb("bb");

		std::cout << "[-----------------------------------------------------]\n";

		bure.signForm(bb);
		bure.executeForm(bb);
		
		std::cout << "[-----------------------------------------------------]\n";
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n------------------------------------------------------\n\n";
	
	try
	{
		ShrubberyCreationForm aa("aa");
		RobotomyRequestForm bb("bb");
		PresidentialPardonForm cc("cc");

		std::cout << "[-----------------------------------------------------]\n";

		aucrat.signForm(aa);
		aucrat.signForm(bb);
		aucrat.signForm(cc);
		aucrat.executeForm(aa);
		aucrat.executeForm(bb);
		aucrat.executeForm(cc);

		std::cout << "[-----------------------------------------------------]\n";
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}