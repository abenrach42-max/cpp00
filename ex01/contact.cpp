/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:57:44 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/01 19:10:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(void){}

void    Contact::set_firstname(std::string firstname)
{
    this->first_name = firstname;
}

void    Contact::set_lastname(std::string lastname)
{
    this->last_name = lastname;
}

void    Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}

void    Contact::set_phonenumber(std::string phonenumber)
{
    this->phone_number = phonenumber;
}

void    Contact::set_secret(std::string secret)
{
    this->secret = secret;
}

std::string Contact::get_firstname(void)
{
    return (this->first_name);
}

std::string Contact::get_lastname(void)
{
    return (this->last_name);
}

std::string Contact::get_nickname(void)
{
    return (this->nickname);
}

std::string Contact::get_phonenumber(void)
{
    return (this->phone_number);
}

std::string Contact::get_secret(void)
{
    return (this->secret);
}

Contact::~Contact(void){}