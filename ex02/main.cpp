/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:43:39 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 18:31:42 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> aa(4);

	aa[0] = 0;
	aa[1] = 1;
	aa[2] = 2;
	aa[3] = 3;

	Array<int> bb(aa);

	std::cout << aa.size() << "\n";
	std::cout << bb.size() << "\n";
	std::cout << "arrptr: " << &(aa[0]) << " " << &(bb[0]) << "\n";
	for (unsigned int i = 0; i < aa.size(); i++)
	{
		std::cout << "arrval: " << aa[i] << " " << bb[i] << "\n";
	}

	std::cout << "------------------------------------------------\n";
	Array<int> cc = aa;

	aa[0] = 4;
	aa[1] = 5;
	aa[2] = 6;
	aa[3] = 7;

	std::cout << aa.size() << "\n";
	std::cout << cc.size() << "\n";
	std::cout << "arrptr: " << &(aa[0]) << " " << &(cc[0]) << "\n";
	for (unsigned int i = 0; i < aa.size(); i++)
	{
		std::cout << "arrval: " << aa[i] << " " << cc[i] << "\n";
	}
	std::cout << "------------------------------------------------\n";

	try
	{
		std::cout << aa[-1] << "\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "------------------------------------------------\n";

	try
	{
		std::cout << aa[4] << "\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "------------------------------------------------\n";

	Array<int> dd = Array<int>();

	std::cout << dd.size() << "\n";

	std::cout << "------------------------------------------------\n";

	try
	{
		std::cout << dd[0] << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}