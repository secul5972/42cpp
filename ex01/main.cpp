/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:49:29 by seungcoh          #+#    #+#             */
/*   Updated: 2022/04/30 20:31:47 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	std::string input;
	PhoneBook pb;

	while (1)
	{
		std::cout << "Choose (ADD, SEARCH, EXIT) : ";
		input = get_not_empty_string();
		if (input.compare("ADD") == 0)
			pb.add_contract();
		else if (input.compare("SEARCH") == 0)
			pb.search_contracts();
		else if (input.compare("EXIT") == 0)
			return 0;
		else
			std::cout << "Wrong command\n";
	}
}