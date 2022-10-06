/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:49:46 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 17:04:45 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<class T>
void iter(T* address, unsigned int length, void(*func)(const T& element))
{
	if (address)
	{
		for (unsigned int i = 0; i < length; i++)
			func(address[i]);
	}
	else 
		std::cout << "address error\n";
}

template<class T>
void print(T a)
{
	std::cout << a << std::endl;
}

#endif