/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:29:41 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 15:52:07 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <stdlib.h>

class Base
{
public:
	virtual ~Base();
};

Base *generate();
void identify(Base *p);
void identify(Base &p);

#endif