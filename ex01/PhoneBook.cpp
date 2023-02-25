/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:18:53 by tidigov           #+#    #+#             */
/*   Updated: 2023/02/21 20:53:13 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook(void) {}

/////////////////////////////////////////////////////////////////////////////////
void	PhoneBook::add_contact(int id)
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;
	
	std::cout << std::endl;
	while (!firstname[0])
	{
		std::cout << "Enter your first name: ";
		getline(std::cin, firstname);
		contact[id].setfirstname(firstname);
	}
	while (!lastname[0])
	{
		std::cout << "Enter your last name: ";
		getline(std::cin, lastname);
		contact[id].setlastname(lastname);
	}
	while (!nickname[0])
	{
		std::cout << "Enter your nick name: ";
		getline(std::cin, nickname);
		contact[id].setnickname(nickname);
	}
	while (!phonenumber[0])
	{
		std::cout << "Enter your phone number: ";
		getline(std::cin, phonenumber);
		contact[id].setphonenumber(phonenumber);
	}
	while (!darkestsecret[0])
	{
		std::cout << "Enter your darkest secret: ";
		getline(std::cin, darkestsecret);
		contact[id].setdarkestsecret(darkestsecret);
	}
	std::cout << std::endl;
}
/////////////////////////////////////////////////////////////////////////////////
void    PhoneBook::search_contact(int index)
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
	int			i = 1;
	int			w = 0;

	if (index == 1)
	{
		std::cout << std::endl;
		std::cout << RED << "Your have no friends xD" << std::endl;
		std::cout << NC << std::endl;
		return ;
	}
	else
	{
		std::cout << std::endl;
		while (i < index)
		{
			std::cout << NC << i << "         " << RED << "|";
/////////////////////////////////////////////////////////////////////////////////
			firstname = contact[i].getfirstname();
			if (firstname.size() > 10)
			{
				firstname.resize(9);
				firstname.push_back('.');
			}
			if (firstname.size() < 10)
			{
				w = 0;
				while (firstname.size() + w++ != 10)
					std::cout << " ";
			}
			std::cout << NC << firstname << RED << "|";
/////////////////////////////////////////////////////////////////////////////////
			lastname = contact[i].getlastname();
			if (lastname.size() > 10)
			{
				lastname.resize(9);
				lastname.push_back('.');
			}
			if (lastname.size() < 10)
			{
				w = 0;
				while (lastname.size() + w++ != 10)
					std::cout << " ";
			}
			std::cout << NC << lastname << RED << "|";
/////////////////////////////////////////////////////////////////////////////////
			nickname = contact[i].getnickname();
			if (nickname.size() > 10)
			{
				nickname.resize(9);
				nickname.push_back('.');
			}
			if (nickname.size() < 10)
			{
				w = 0;
				while (nickname.size() + w++ != 10)
					std::cout << " ";
			}
			std::cout << NC << nickname << std::endl;
/////////////////////////////////////////////////////////////////////////////////
			i++;
		}
		std::cout << NC << std::endl;
	}
	PhoneBook::return_contact(index);
}

void	PhoneBook::return_contact(int index)
{
		int	i = 0;
		int	a = 1;

		while (a != 0)
		{
			std::cout << RED << "Choose a number : " << NC;
			if(!(std::cin >> i))
			{
				std::cout<<"[Must be a integer]"<<std::endl;
				std::cin.clear();
        		std::cin.ignore(100, '\n');
			}
			else
			{
				if (i > 0 && i < index)
					a = 0;
			}
		}
		std::cout << NC << std::endl ;
		std::cout << NC << contact[i].getfirstname() << RED << " | ";
		std::cout << NC << contact[i].getlastname() << RED << " | ";
		std::cout << NC << contact[i].getnickname() << RED << " | ";
		std::cout << NC << contact[i].getphonenumber() << RED << " | ";
		std::cout << NC << contact[i].getdarkestsecret() << NC;
		std::cout << std::endl << std::endl;
		std::cin.clear();
        std::cin.ignore(100, '\n');
}