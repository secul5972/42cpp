/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 12:40:09 by seungcoh          #+#    #+#             */
/*   Updated: 2022/06/26 13:39:31 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl;

typedef struct s_Data
{
	std::string level;
	void (Harl::*func)(void);
} t_Data;

class Harl
{
private:
	t_Data data[4];

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl();
	void complain(std::string level);
	~Harl();
};

#endif