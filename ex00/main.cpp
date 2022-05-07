/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:08:39 by seungcoh          #+#    #+#             */
/*   Updated: 2022/05/07 16:08:55 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* zombie = newZombie("aa");
	zombie->announce();

	randomChump("bb");

	Zombie zombie2;
	zombie2.announce();

	Zombie *zombie3 = new Zombie("cc");
	zombie3->announce();

	delete zombie;
	delete zombie3;
}