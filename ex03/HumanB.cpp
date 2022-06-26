/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 21:48:26 by secul5972         #+#    #+#             */
/*   Updated: 2022/06/26 15:46:45 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _name) : name(_name), weapon(NULL) {}

void HumanB::attack(void)
{
	if (this->weapon == NULL)
		std::cout << "No Weapon\n";
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon;
}

HumanB::~HumanB() {}
