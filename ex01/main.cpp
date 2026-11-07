/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 17:58:02 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/01 19:31:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(int ac, char **av)
{
	Phonebook phonebook;
	
	(void)av;
	if (ac != 1)
		return (1);
	while (1)
	{
		std::string	line;
		std::cout << "What do you want to do (ADD, SEARCH, EXIT) : ";
		std::cin >> line;
		std::cout << std::endl;
		if (std::cin.fail())
		{
			std::cout << "You exit your phonebook" << std::endl;
			break ;
		}
		if (line == "ADD")
		{
			if (phonebook.do_add())
			{
				std::cout << std::endl;
				std::cout << "You exit your phonebook" << std::endl;
				return (1);
			}
		}
		else if (line == "SEARCH")
		{
			if (phonebook.do_search())
			{
				std::cout << std::endl;
				std::cout << "You exit your phonebook" << std::endl;
				return (1);
			}
		}
		else if (line == "EXIT")
		{
			std::cout << "You exit your phonebook" << std::endl;
			break ;
		}
	}
	return (0);
}
