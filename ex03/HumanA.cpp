/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 21:21:23 by secul5972         #+#    #+#             */
/*   Updated: 2022/06/25 22:17:30 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(_weapon) {}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << "\n";
}

HumanA::~HumanA() {}
