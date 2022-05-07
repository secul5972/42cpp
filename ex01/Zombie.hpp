/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:08:48 by seungcoh          #+#    #+#             */
/*   Updated: 2022/05/07 16:08:48 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
class Zombie
{
private:
	std::string name;

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);
	void setname(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif