/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 20:57:49 by secul5972         #+#    #+#             */
/*   Updated: 2022/06/25 22:14:31 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string _type);
	const std::string& getType();
	void setType(std::string _type);
	~Weapon();
};

#endif
