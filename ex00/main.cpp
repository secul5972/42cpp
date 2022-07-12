/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:29:47 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/12 10:50:52 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include "easyfind.hpp"

int main()
{
	std::list<int> aa;
	std::vector<int> bb;
	std::deque<int> cc;

	for(int i=0;i<100;i++)
	{
		aa.push_back(i);
		bb.push_back(i * 2);
		cc.push_back(i * 3 + 1);
	}

	if (easyfind(aa, 4))
		std::cout << "aa can find\n";
	else
		std::cout << "aa can't find\n";
	
	if (easyfind(bb, 4))
		std::cout << "bb can find\n";
	else
		std::cout << "bb can't find\n";

	if (easyfind(cc, 4))
		std::cout << "cc can find\n";
	else
		std::cout << "cc can't find\n";

	std::cout << "\n--------------------------------------------\n\n";
	
	if (easyfind(aa, 17))
		std::cout << "aa can find\n";
	else
		std::cout << "aa can't find\n";
	
	if (easyfind(bb, 17))
		std::cout << "bb can find\n";
	else
		std::cout << "bb can't find\n";

	if (easyfind(cc, 17))
		std::cout << "cc can find\n";
	else
		std::cout << "cc can't find\n";

	std::cout << "\n--------------------------------------------\n\n";

	if (easyfind(aa, 103))
		std::cout << "aa can find\n";
	else
		std::cout << "aa can't find\n";
	
	if (easyfind(bb, 103))
		std::cout << "bb can find\n";
	else
		std::cout << "bb can't find\n";

	if (easyfind(cc, 103))
		std::cout << "cc can find\n";
	else
		std::cout << "cc can't find\n";

	std::cout << "\n--------------------------------------------\n\n";

	if (easyfind(aa, -4))
		std::cout << "aa can find\n";
	else
		std::cout << "aa can't find\n";
	
	if (easyfind(bb, -4))
		std::cout << "bb can find\n";
	else
		std::cout << "bb can't find\n";

	if (easyfind(cc, -4))
		std::cout << "cc can find\n";
	else
		std::cout << "cc can't find\n";

	std::cout << "\n--------------------------------------------\n\n";

}