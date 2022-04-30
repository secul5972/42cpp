/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:49:29 by seungcoh          #+#    #+#             */
/*   Updated: 2022/04/30 20:59:59 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contract.hpp"
#include "ExtraFun.hpp"
#include <iomanip>

class PhoneBook
{
private:
	Contract contracts[8];
	int first_idx;
	int cnt;
	int full;
public:
	PhoneBook()
	{
		first_idx = 0;
		cnt = 0;
		full = 0;
	}
	void add_contract();
	void search_contracts();
};
#endif
