/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:19:42 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 14:25:47 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "parameter error\n";
		return 1;
	}
	Conversion aa(argv[1]);
	aa.findActualTypeAndConvert();
}