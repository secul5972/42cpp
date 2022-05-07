/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:08:39 by seungcoh          #+#    #+#             */
/*   Updated: 2022/05/07 14:27:23 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombie = newZombie(std::string("aa"));
    zombie->announce();
    randomChump(std::string("bb"));

    Zombie zombie2;
    zombie2.announce();
}