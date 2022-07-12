/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:29:47 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/12 16:11:20 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------------------\n";

	try
	{
		Span sp2 = Span(10000);

		std::vector<int> tmp;
		for (int i = 0; i < 10000; i++)
			tmp.push_back(i * 3 + 1);

		sp2.addNumber(tmp.begin(), tmp.end());

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------------------\n";

	try
	{
		Span ex = Span(3);

		ex.addNumber(1);
		ex.addNumber(2);
		ex.addNumber(3);
		ex.addNumber(4);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------------------\n";

	try
	{
		Span ex2 = Span(3);

		ex2.addNumber(1);
		std::cout << ex2.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------------------\n";

	try
	{
		Span ex3 = Span(3);

		std::cout << ex3.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------------------\n";

	try
	{
		Span ex4 = Span(3);

		std::vector<int> tmp;
		for (int i = 0; i < 10000; i++)
			tmp.push_back(i * 3 + 1);

		ex4.addNumber(tmp.begin(), tmp.end());
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}


	return 0;
}