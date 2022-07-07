/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:39:43 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/07 22:05:39 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat aa("aa", 3);
		std::cout << aa << '\n';
		for (int i = 0; i < 4; i++)
		{
			aa.upGrade();
			std::cout << aa << '\n';
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";

	try
	{
		Bureaucrat aa("aa", 145);
		std::cout << aa << '\n';
		for (int i = 0; i < 10; i++)
		{
			aa.downGrade();
			std::cout << aa << '\n';
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";

	try
	{
		Bureaucrat aa("aa", 151);
		std::cout << aa << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "------------------------------------------------------\n";
	
	try
	{
		Bureaucrat aa("aa", -456);
		std::cout << aa << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";

	try
	{
		Bureaucrat aa("aa", 3);
		Bureaucrat bb(aa);
		
		std::cout << bb << '\n';
		for (int i = 0; i < 4; i++)
		{
			aa.upGrade();
			std::cout << bb << '\n';
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}