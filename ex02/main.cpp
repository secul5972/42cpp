/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:49:06 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/03 15:27:01 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap A;
	FragTrap B("bb");
	FragTrap C(B);
	FragTrap D;
	FragTrap E("asdas");

	D = A;
	A.highFivesGuys();
	B.highFivesGuys();
	C.highFivesGuys();
	D.highFivesGuys();
	E.highFivesGuys();
}