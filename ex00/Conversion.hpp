/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:00:44 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 14:34:12 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <limits>
#include <cstdlib>

class Conversion
{
private:
	double value;
	bool float_flag;
	bool prec_flag;
	bool char_flag;
	Conversion();
public:
	Conversion(const char *input);
	Conversion(const Conversion &conversion);
	~Conversion();
	Conversion &operator=(const Conversion &conversion);

	void findActualTypeAndConvert();

	void ifCharIsActual();
	void ifIntIsActual();
	void ifFloatIsActual();
	void ifDoubleIsActual();
};

#endif