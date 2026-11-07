/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 12:59:41 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/01 19:28:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void) : index(0){}

int Phonebook::max_index(void)
{
    if (this->index <= 7)
        return (this->index);
    else
        return (8);
}

int Phonebook::do_add(void)
{
    std::string str;
    
    std::cout << "Enter your firstname : ";
    std::cin >> str;
    if (std::cin.eof())
        return (1);
    this->contacts[index % 8].set_firstname(str);
    std::cout << "Enter your lastname : ";
    std::cin >> str;
    if (std::cin.eof())
        return (1);
    this->contacts[index % 8].set_lastname(str);
    std::cout << "Enter your nickname : ";
    std::cin >> str;
    if (std::cin.eof())
        return (1);
    this->contacts[index % 8].set_nickname(str);
    std::cout << "Enter your Phone number : ";
    std::cin >> str;
    if (std::cin.eof())
        return (1);
    this->contacts[index % 8].set_phonenumber(str);
    std::cout << "Enter your secret : ";
    std::cin >> str;
    if (std::cin.eof())
        return (1);
    this->contacts[index % 8].set_secret(str);
    this->index++;
    return (0);
}

void    Phonebook::show_tab(void)
{
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < this->max_index() ; i++)
    {
        std::cout << "|" << std::setw(10) << i << "|";
        if (this->contacts[i].get_firstname().size() > 10)
            std::cout << std::setw(10) << this->contacts[i].get_firstname().substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << this->contacts[i].get_firstname() << "|";
        if (this->contacts[i].get_lastname().size() > 10)
            std::cout << std::setw(10) << this->contacts[i].get_lastname().substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << this->contacts[i].get_lastname() << "|";
        if (this->contacts[i].get_nickname().size() > 10)
            std::cout << std::setw(10) << this->contacts[i].get_nickname().substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << this->contacts[i].get_nickname() << "|";
        std::cout << std::endl;
    }
    std::cout << "---------------------------------------------" << std::endl;
}

int Phonebook::do_search(void)
{
    std::string str;
    int         index;
    
    this->show_tab();
    std::cout << "Choose a contact with index (0, ..., 7) : ";
    while (1)
    {
        std::cin >> str;
        if (std::cin.eof())
            return (1);
        if (str.length() == 1 && str[0] >= '0' && str[0] <= '7')
        {
            index = str[0] - '0';
            break;
        }
        std::cout << "Please choose a valid index : ";
    }
    if (index >= this->max_index())
    {
        std::cout << "This contact is empty" << std::endl;
        return (0);
    }
    std::cout << std::endl << "--- CONTACT CARD (INDEX " << index << ") ---" << std::endl;
    std::cout << "First Name:     " << this->contacts[index].get_firstname() << std::endl;
    std::cout << "Last Name:      " << this->contacts[index].get_lastname() << std::endl;
    std::cout << "Nickname:       " << this->contacts[index].get_nickname() << std::endl;
    std::cout << "Phone Number:   " << this->contacts[index].get_phonenumber() << std::endl;
    std::cout << "Darkest Secret: " << this->contacts[index].get_secret() << std::endl;
    std::cout << "------------------------------------" << std::endl << std::endl;
    return (0);
}

Phonebook::~Phonebook(void){}
