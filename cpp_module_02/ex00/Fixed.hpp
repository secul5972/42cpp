/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:05:40 by seungcoh          #+#    #+#             */
/*   Updated: 2022/06/29 11:59:35 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int value;
	static const int frac = 8;

public:
	Fixed();
	Fixed(const Fixed &copy);

	Fixed &operator=(const Fixed &fixed);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	~Fixed();
};

#endif