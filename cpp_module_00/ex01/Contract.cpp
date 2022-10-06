/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contract.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:16:02 by seungcoh          #+#    #+#             */
/*   Updated: 2022/04/30 20:40:12 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contract.hpp"

void Contract::set_first_name(std::string str)
{
	this->first_name = str;
}

void Contract::set_last_name(std::string str)
{
	this->last_name = str;
}

void Contract::set_nick_name(std::string str)
{
	this->nick_name = str;
}

void Contract::set_phone_number(std::string str)
{
	this->phone_number = str;
}

void Contract::set_darkest_secret(std::string str)
{
	this->darkest_secret = str;
}

std::string Contract::get_first_name()
{
	return this->first_name;
}

std::string Contract::get_last_name()
{
	return this->last_name;
}

std::string Contract::get_nick_name()
{
	return this->nick_name;
}

std::string Contract::get_phone_number()
{
	return this->phone_number;
}

std::string Contract::get_darkest_secret()
{
	return this->darkest_secret;
}