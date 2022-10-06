/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:19:42 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 15:09:52 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serialization.hpp"

int main()
{
	Data aa;
	aa.a1 = std::string("asdasd");
	aa.a2 = 42;
	aa.a3 = 4.5353535;
	aa.a4 = 't';
	std::cout << aa.a1 << "\n"
			<< aa.a2 << "\n"
			<< aa.a3 << "\n"
			<< aa.a4 << "\n";
	std::cout << &aa <<"\n";
	std::cout << "-------------------------------\n";
	uintptr_t raw = serialize(&aa);
	Data *bb = deserialize(raw);
	std::cout << bb->a1 << "\n"
			<< bb->a2 << "\n"
			<< bb->a3 << "\n"
			<< bb->a1 << "\n";
	std::cout << bb <<"\n";
}