/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contract.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:49:17 by seungcoh          #+#    #+#             */
/*   Updated: 2022/04/30 21:00:11 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTRACT_HPP
#define CONTRACT_HPP

#include <iostream>
#include <string>

class Contract
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

public:
	void set_first_name(std::string str);
	void set_last_name(std::string str);
	void set_nick_name(std::string str);
	void set_phone_number(std::string str);
	void set_darkest_secret(std::string str);
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nick_name();
	std::string get_phone_number();
	std::string get_darkest_secret();
};
#endif