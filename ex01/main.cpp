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
    
    while (1)
    {
		std::cout << std::endl;
		std::cout << RED << "~ PHONEBOOK ~" << std::endl << std::endl;
		std::cout << NC << "Please enter a command" << std::endl;
		std::cout << "~ ADD ?" << std::endl;
		std::cout << "~ SEARCH ?" << std::endl;
		std::cout << "~ EXIT ?" << std::endl;
        std::cout << std::endl;
        getline(std::cin, command);
        /////////////////////////////////////////////////////////////////////////////////
        if (command.compare("ADD") == 0)
		{
			if (rep.index == 8)
			{
				std::cout << "Repertoire is full do you want delete one ?" << std::endl;
				getline(std::cin, command);
				if (command.compare("yes"))
				{
					
					std::cout << "new contact added" << std::endl;
				}
				if (command.compare("no"))
					std::cout << "Nothing changed" << std::endl;
			}
            else
                rep.add_contact(rep.index);
                rep.search_contact(rep.index);
                return (0);
		}
        /////////////////////////////////////////////////////////////////////////////////
        else if (command.compare("SEARCH") == 0)
		{
			// getline(std::cin, con.firstname);
			// getline(std::cin, con.lastname);
			// getline(std::cin, con.nickname);
			//rep.search_contact(0);
		}
        /////////////////////////////////////////////////////////////////////////////////
        else if (command.compare("EXIT") == 0)
        {
            break ;
        }
        else
			std::cout << "Wrong argument try again..." << std::endl;
    }
    // std::cout << "Please enter your first name: ";
    // getline(std::cin, repertoire.firstname);
    // std::cout << "Please enter your last name: ";
    // getline(std::cin, repertoire.lastname);
    // std::cout << "Please enter your nickname: ";
    // getline(std::cin, repertoire.nickname);
    // std::cout << "Please enter your phonenumber: ";
    // getline(std::cin, repertoire.phonenumber);
    // std::cout << "Please enter your darkestsecret: ";
    // getline(std::cin, repertoire.darkestsecret);
    // std::cout << "Hello your first name is " << repertoire.firstname << "," << std::endl;
    // std::cout << "your last name is " << repertoire.lastname << "," << std::endl;
    // std::cout << "your nickname is " << repertoire.nickname << "," << std::endl;
    // std::cout << "your phonenumber is " << repertoire.phonenumber << "," << std::endl;
    // std::cout << "your darkest secret is " << repertoire.darkestsecret << "," << std::endl;
}
