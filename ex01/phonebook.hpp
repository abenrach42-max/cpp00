/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 18:06:39 by abenrach          #+#    #+#             */
/*   Updated: 2026/08/31 17:25:42 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"

class   Phonebook
{
    private:
        int index;
        Contact contacts[8];
    
    public:
        Phonebook(void);
        ~Phonebook(void);
        int do_add(void);
        int do_search(void);
        int max_index(void);
        void    show_tab(void);
};

#endif
