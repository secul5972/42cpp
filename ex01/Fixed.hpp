/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:05:40 by seungcoh          #+#    #+#             */
/*   Updated: 2022/06/26 16:42:53 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef FIXED_HPP
 #define FIXED_HPP

class Fixed
{
private:
	int value;
	static const int frac = 8;
public:
	Fixed();
	Fixed(const int val);
	Fixed(const Fixed &copy);
	Fixed& operator=(const Fixed& fixed);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

 #endif