/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:19:17 by tidigov           #+#    #+#             */
/*   Updated: 2023/02/21 20:45:30 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(int ac, char **av)
{
    PhoneBook	rep;
    std::string command;
	rep.index = 0;
    
	std::cout << std::endl;
	std::cout << RED << "~ PHONEBOOK ~" << std::endl << std::endl;
	std::cout << NC << "Please enter a command" << std::endl;
    while (1)
    {
	    std::cout << "~ ADD ~ SEARCH ~ EXIT ~" << std::endl;
        std::cout << std::endl;
        getline(std::cin, command);
        /////////////////////////////////////////////////////////////////////////////////
        if (command.compare("ADD") == 0)
		{
			if (rep.index == 8)
			{
				std::cout << "Repertoire is full do you want delete one ?" << std::endl;
				getline(std::cin, command);
				if (command.compare("yes") == 0)
				{
                    rep.index = 0;
					rep.add_contact(rep.index);
					std::cout << "new contact added" << std::endl;
				}
				else if (command.compare("no") == 0)
					std::cout << "Nothing changed" << std::endl;
                else
                    std::cout << "Please write yes or no." << std::endl;
			}
            else
                rep.add_contact(rep.index);
		}
        /////////////////////////////////////////////////////////////////////////////////
        else if (command.compare("SEARCH") == 0)
            rep.search_contact(rep.index);
        /////////////////////////////////////////////////////////////////////////////////
        else if (command.compare("EXIT") == 0)
            break ;
        else
			std::cout << "Are you dumb ? Wrong argument try again..." << std::endl;
    }
}
