/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:39:43 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/08 10:36:16 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form bb("bb", 0, 13);
		std::cout << bb << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";

	try
	{
		Form bb("bb", 151, 13);
		std::cout << bb << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";

	try
	{
		Bureaucrat aa("aa", 3);
		Form bb("bb", 5, 13);
		std::cout << aa << '\n';
		std::cout << bb << '\n';
		aa.signForm(bb);
		std::cout << aa << '\n';
		std::cout << bb << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";

	try
	{
		Bureaucrat aa("aa", 8);
		Form bb("bb", 5, 13);
		std::cout << aa << '\n';
		std::cout << bb << '\n';
		aa.signForm(bb);
		std::cout << aa << '\n';
		std::cout << bb << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";

	try
	{
		Bureaucrat aa("aa", 2);
		Bureaucrat cc("cc", 3);
		Form bb("bb", 5, 13);
		std::cout << aa << '\n';
		std::cout << bb << '\n';
		std::cout << cc << '\n';
		aa.signForm(bb);
		cc.signForm(bb);
		std::cout << bb << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------\n";
}