/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExtraFun.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:42:59 by seungcoh          #+#    #+#             */
/*   Updated: 2022/04/30 20:59:23 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExtraFun.hpp"

std::string get_not_empty_string()
{
    std::string input;
    while (1)
    {
        getline(std::cin, input);
        if (input.length() > 0)
            return input;
        std::cout << "Type not null string : ";
    }
}

int get_idx_string(int bound)
{
    std::string input;
    while (1)
    {
        getline(std::cin, input);
        if (input.length() == 1 && input[0] >= '0' && input[0] < '0' + bound)
            return input[0] - '0';
        std::cout << "Type idx (0.." << bound - 1 << ") : ";
    }
}