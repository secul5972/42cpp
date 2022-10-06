/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 12:44:38 by seungcoh          #+#    #+#             */
/*   Updated: 2022/06/26 13:39:18 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	data[0].level = "DEBUG";
	data[1].level = "INFO";
	data[2].level = "WARNING";
	data[3].level = "ERROR";

	data[0].func = &Harl::debug;
	data[1].func = &Harl::info;
	data[2].func = &Harl::warning;
	data[3].func = &Harl::error;
 }

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\n";
	std::cout << "I really do!\n\n";
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger!\n";
	std::cout << "If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable!\n";
	std::cout << "I want to speak to the manager now.\n\n";
}

void Harl::complain(std::string level)
{
	int i = 0;
	while(i < 4 && level.compare(this->data[i].level))
	{
		i++;
	}
	if (i < 4)
		(this->*data[i].func)();
}

Harl::~Harl() {}