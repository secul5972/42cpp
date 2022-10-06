/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 21:06:58 by secul5972         #+#    #+#             */
/*   Updated: 2022/06/25 22:16:34 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	this->type = _type;
}

const std::string &Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string _type)
{
	this->type = _type;
}

Weapon::~Weapon() {}
