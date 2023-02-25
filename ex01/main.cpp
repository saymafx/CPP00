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

int main(void)
{
    PhoneBook	rep;
    std::string command;
	rep.index = 1;
    int i = 1;
    
	std::cout << std::endl;
	std::cout << RED << "~ PHONEBOOK ~" << std::endl << std::endl;
	std::cout << NC << "Please enter a command" << std::endl;
    while (1)
    {
	    std::cout << NC << "~ ADD ~ SEARCH ~ EXIT ~" << std::endl;
        std::cout << std::endl;
        getline(std::cin, command);
        if (feof(stdin))
        {
            std::cout << RED << "Nice try xD" << NC << std::endl << std::endl;
            return (0);
        }
        if (!command[0])
            std::cout << RED << "Write something bro..." << std::endl << std::endl;
        /////////////////////////////////////////////////////////////////////////////////
        else if (command.compare("ADD") == 0)
		{
			if (i == 9)
			{
                std::cout << RED;
				std::cout << "Repertoire is full you will delete the oldest, are you sure ?" << std::endl;
				std::cout << NC;
                while (command.compare("yes") != 0 && command.compare("no") != 0)
                {
                    getline(std::cin, command);
                    if (command.compare("yes") == 0)
                    {
                        i = 1;
                        rep.add_contact(i);
                        i++;
                        std::cout << "new contact added" << std::endl << std::endl;
                    }
                    else if (command.compare("no") == 0)
                        std::cout << RED <<"Nothing changed" << NC << std::endl << std::endl;
                    else
                        std::cout << RED << "Please write yes or no." << NC << std::endl;
                }
			}
            else
            {
                rep.add_contact(i);
                if (rep.index != 9)
                    rep.index++;
                std::cout << RED << "new contact added" << NC << std::endl;
                std::cout << std::endl;
                i++;
            }
		}
        /////////////////////////////////////////////////////////////////////////////////
        else if (command.compare("SEARCH") == 0)
            rep.search_contact(rep.index);
        /////////////////////////////////////////////////////////////////////////////////
        else if (command.compare("EXIT") == 0)
            break ;
        else
			std::cout << RED << "Are you dumb ? Wrong argument try again..." << std::endl << std::endl;
    }
}
