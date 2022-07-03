/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:49:06 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/03 11:55:04 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap A;
	ClapTrap B("bb");
	ClapTrap C(B);

	A.attack("fff");
	B.takeDamage(3);
	C.beRepaired(2);

	for(int i = 0;i < 10;i++)
		C.attack("fff");
	for(int i = 0;i < 10;i++)
		B.beRepaired(1);
	for(int i = 0;i < 10;i++)
		A.takeDamage(2);
	A.attack("ccc");
}