/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 22:23:16 by secul5972         #+#    #+#             */
/*   Updated: 2022/06/26 03:23:22 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void error_msg(void)
{
	std::cout << "error\n";
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		error_msg();
		return 1;
	}

	std::ifstream ifs(argv[1]);
	if (ifs.is_open() == false)
	{
		error_msg();
		return 1;
	}

	std::string str = argv[1];
	str += ".replace";
	std::ofstream ofs(str.c_str());

	char ch;
	std::string curr;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	while (ifs.get(ch))
	{
		curr += ch;

		if (curr.size() == s1.size())
		{
			int flag = 1;
			for (int i = 0; i < (int)curr.size(); i++)
			{
				if (s1[i] != curr[i])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				curr.clear();
				ofs.write(argv[3], s2.size());
			}
			else
			{
				ofs.put(curr[0]);
				curr = curr.erase(0, 1);
			}
		}
	}

	if (curr.size() > 0)
		ofs.write(curr.c_str(), curr.size());

	ifs.close();
	ofs.close();
}
