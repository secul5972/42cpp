/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 21:48:26 by secul5972         #+#    #+#             */
/*   Updated: 2022/06/25 22:17:22 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _name) : name(_name), weapon(NULL) {}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon;
}

HumanB::~HumanB() {}
