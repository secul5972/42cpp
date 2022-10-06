/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:43:39 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 18:39:33 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <stdlib.h>

#define MAX_VAL 750
int main(int, char**)
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
	
	std::cout << "------------------------------------------------\n";

  	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

	std::cout << "------------------------------------------------\n";
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

	std::cout << "------------------------------------------------\n";
	
	return 0;
}