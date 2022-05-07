/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:08:39 by seungcoh          #+#    #+#             */
/*   Updated: 2022/05/07 17:12:52 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 4;
	Zombie *zombies = zombieHorde(n, "ss");
	for(int i = 0; i < n; i++)
	{
		zombies[i].announce();
	}
	
	delete [] zombies;
}