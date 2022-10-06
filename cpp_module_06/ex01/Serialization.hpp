/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:50:49 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 15:07:28 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <string>

typedef struct _Data
{
	std::string a1;
	int	a2;
	double a3;
	char a4; 
}	Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
