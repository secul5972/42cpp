/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:29:46 by seungcoh          #+#    #+#             */
/*   Updated: 2022/04/30 20:57:10 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_contract()
{
    std::string input;

    std::cout << "Type first name : ";
    input = get_not_empty_string();
    this->contracts[this->first_idx].set_first_name(input);

    std::cout << "Type last name : ";
    input = get_not_empty_string();
    this->contracts[this->first_idx].set_last_name(input);

    std::cout << "Type nick name : ";
    input = get_not_empty_string();
    this->contracts[this->first_idx].set_nick_name(input);

    std::cout << "Type phone number : ";
    input = get_not_empty_string();
    this->contracts[this->first_idx].set_phone_number(input);

    std::cout << "Type darkest secret : ";
    input = get_not_empty_string();
    this->contracts[this->first_idx].set_darkest_secret(input);
    this->first_idx = (this->first_idx + 1) % 8;

    if (cnt < 8)
        cnt++;
    if (cnt == 8)
        this->full = 1;
}

void PhoneBook::search_contracts()
{
    int i = 0;
    int cnt = 0;

    if (this->full)
        i = this->first_idx;

    while (cnt != this->cnt)
    {
        std::cout << std::setw(10) << cnt << '|';

        if (this->contracts[i].get_first_name().length() > 10)
            std::cout << this->contracts[i].get_first_name().substr(0, 9) << "." << '|';
        else
            std::cout << std::setw(10) << this->contracts[i].get_first_name() << '|';

        if (this->contracts[i].get_last_name().length() > 10)
            std::cout << this->contracts[i].get_last_name().substr(0, 9) << "." << '|';
        else
            std::cout << std::setw(10) << this->contracts[i].get_last_name() << '|';

        if (this->contracts[i].get_nick_name().length() > 10)
            std::cout << this->contracts[i].get_nick_name().substr(0, 9) << "." << '|';
        else
            std::cout << std::setw(10) << this->contracts[i].get_nick_name() << '|';

        std::cout << "\n";
        cnt++;
        i = (i + 1) % 8;
    }

    std::cout << "Type idx : ";
    i = get_idx_string(full ? 8 : this->first_idx);
    if (this->full)
        i = (i + this->first_idx) % 8;
    std::cout << "first_name : " << this->contracts[i].get_first_name() << '\n';
    std::cout << "last_name : " << this->contracts[i].get_last_name() << '\n';
    std::cout << "nick_name : " << this->contracts[i].get_nick_name() << '\n';
    std::cout << "phone_number : " << this->contracts[i].get_phone_number() << '\n';
    std::cout << "darkest_secret : " << this->contracts[i].get_darkest_secret() << '\n';
}