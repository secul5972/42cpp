/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:32:56 by seungcoh          #+#    #+#             */
/*   Updated: 2022/06/26 13:42:25 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl test = Harl();

	test.complain("DEBUG");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("ERROR");
	test.complain("sss");
}