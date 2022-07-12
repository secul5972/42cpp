/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:29:44 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/12 10:51:12 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template<class T>
bool easyfind(const T &container, const int num)
{
	class T::iterator iter;

	if (std::find(container.begin(), container.end(), num) != container.end())
		return true;
	return false;
}

#endif