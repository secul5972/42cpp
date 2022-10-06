/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:01:47 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 14:43:49 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(const char *input)
{
	value = atof(input);
	std::string str(input);
	if (str.length() == 1 && !('0' <= str[0] && str[0] <= '9'))
	{
		char_flag = true;
		value = str[0];
	}
	else
		char_flag = false;

	if (((str.find("inf") != std::string::npos) && (str[str.length() - 1] == 'f') && (str[str.length() - 2] == 'f'))
	|| ((str.find("inf") == std::string::npos) && (str[str.length() - 1] == 'f')))
		float_flag = true;
	else
		float_flag = false;

	if (str.find('.') != std::string::npos)
		prec_flag = true;
	else 
		prec_flag = false;
}

Conversion::Conversion(const Conversion &conversion) 
{
	value = conversion.value;
	float_flag = conversion.float_flag;
	prec_flag = conversion.prec_flag;
	char_flag = conversion.char_flag;
}

Conversion &Conversion::operator=(const Conversion &conversion)
{
	value = conversion.value;
	float_flag = conversion.float_flag;
	prec_flag = conversion.prec_flag;
	char_flag = conversion.char_flag;
	return *this;
}

void Conversion::findActualTypeAndConvert()
{
	if (float_flag)
		ifFloatIsActual();
	else if ((0 <= value && value <= std::numeric_limits<char>::max() && prec_flag == false) || char_flag)
		ifCharIsActual();
	else if (std::numeric_limits<int>::min() <= value && value <= std::numeric_limits<int>::max() && prec_flag == false)
		ifIntIsActual();
	else
		ifDoubleIsActual();
}

void Conversion::ifCharIsActual()
{
	char val = (char)value;
	if (32 <= val && val <= 126)
		std::cout << "char: " << val << "\n";
	else
		std::cout << "char: Non displayable\n";

	std::cout << "int: " << static_cast<int>(val) << "\n";
	
	if (val - (int)val == 0)
	{
		std::cout << "float: " << static_cast<float>(val) << ".0f\n";
		std::cout << "double: " << static_cast<double>(val) << ".0\n";
	}
	else
	{
		std::cout << "float: " << static_cast<float>(val) << "f\n";
		std::cout << "double: " << static_cast<double>(val) << "\n";
	}
}

void Conversion::ifIntIsActual()
{
	int val = (int)value;
	if (32 <= val && val <= 126)
		std::cout << "char: " << (char)val << "\n";
	else if (0 <= val && val <= 127)
		std::cout << "char: Non displayable\n";
	else 
		std::cout << "char: impossible\n";

	std::cout << "int: " << val << "\n";
	std::cout << "float: " << static_cast<float>(val) << ".0f\n";
	std::cout << "double: " << static_cast<double>(val) << ".0\n";
}

void Conversion::ifFloatIsActual()
{
	float val = (float)value;
	if (32 <= val && val <= 126)
		std::cout << "char: " << (char)val << "\n";
	else if (0 <= val && val <= 127)
		std::cout << "char: Non displayable\n";
	else 
		std::cout << "char: impossible\n";

	if (std::numeric_limits<int>::min() <= val && val <= std::numeric_limits<int>::max())
		std::cout << "int: " << static_cast<int>(val) << "\n";
	else 
		std::cout << "int: impossible\n";

	if (val - (int)val == 0)
	{
		std::cout << "float: " << static_cast<float>(val) << ".0f\n";
		std::cout << "double: " << static_cast<double>(val) << ".0\n";
	}
	else
	{
		std::cout << "float: " << static_cast<float>(val) << "f\n";
		std::cout << "double: " << static_cast<double>(val) << "\n";
	}
}

void Conversion::ifDoubleIsActual()
{
	double val = (double)value;
	if (32 <= val && val <= 126)
		std::cout << "char: " << (char)val << "\n";
	else if (0 <= val && val <= 127)
		std::cout << "char: Non displayable\n";
	else 
		std::cout << "char: impossible\n";
		
	if (std::numeric_limits<int>::min() <= val && val <= std::numeric_limits<int>::max())
		std::cout << "int: " << static_cast<int>(val) << "\n";
	else 
		std::cout << "int: impossible\n";

	if (val - (int)val == 0)
	{
		std::cout << "float: " << static_cast<float>(val) << ".0f\n";
		std::cout << "double: " << static_cast<double>(val) << ".0\n";
	}
	else
	{
		std::cout << "float: " << static_cast<float>(val) << "f\n";
		std::cout << "double: " << static_cast<double>(val) << "\n";
	}
}

Conversion::~Conversion() {}