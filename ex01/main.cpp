/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:49:06 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/03 14:58:48 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap A;
	ScavTrap B("bb");
	ScavTrap C(B);
	ScavTrap D;
	ScavTrap E("asdas");

	A.attack("fff");

	for(int i = 0;i < 10; i++)
		C.attack("fff");
	
	A.attack("ccc");
	D = A;
	D.attack("sss");
	D.guardGate();
	B.guardGate();
}