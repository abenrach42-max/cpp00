/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 12:57:10 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/01 19:10:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

class   Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string secret;
    public:
        Contact(void);
        ~Contact(void);
        void        set_firstname(std::string firstname);
        void        set_lastname(std::string lastname);
        void        set_nickname(std::string nickname);
        void        set_phonenumber(std::string phonenumber);
        void        set_secret(std::string secret);
        std::string get_firstname(void);
        std::string get_lastname(void);
        std::string get_nickname(void);
        std::string get_phonenumber(void);
        std::string get_secret(void);
};

#endif