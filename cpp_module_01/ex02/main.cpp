/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:15:31 by seungcoh          #+#    #+#             */
/*   Updated: 2022/05/07 17:16:01 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringPEF = brain;

	std::cout << "string:		" << &brain << "\n";
	std::cout << "stringPTR:	" << stringPTR << "\n";
	std::cout << "stringREF:	" << &stringPEF << "\n";

	std::cout << "string:		" << brain << "\n";
	std::cout << "stringPTR:	" << *stringPTR << "\n";
	std::cout << "stringREF:	" << stringPEF << "\n";
}
