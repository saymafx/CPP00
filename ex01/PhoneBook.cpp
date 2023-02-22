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
		contact[index].setfirstname(firstname);
	}
	while (!lastname[0])
	{
		std::cout << "Enter your last name: ";
		getline(std::cin, lastname);
		contact[index].setlastname(lastname);
	}
	while (!nickname[0])
	{
		std::cout << "Enter your nick name: ";
		getline(std::cin, nickname);
		contact[index].setnickname(nickname);
	}
	while (!phonenumber[0])
	{
		std::cout << "Enter your phone number: ";
		getline(std::cin, phonenumber);
		contact[index].setphonenumber(phonenumber);
	}
	while (!darkestsecret[0])
	{
		std::cout << "Enter your darkest secret: ";
		getline(std::cin, darkestsecret);
		contact[index].setdarkestsecret(darkestsecret);
	}
	std::cout << std::endl;
	index++;
}
/////////////////////////////////////////////////////////////////////////////////
void    PhoneBook::search_contact(int index)
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
	int			i = 0;

	if (index == 0)
	{
		std::cout << std::endl;
		std::cout << RED << "Your have no friends xD" << std::endl;
		std::cout << NC << std::endl;
	}
	else
	{
		std::cout << std::endl;
		while (i < index)
		{
			std::cout << RED << i << "         " << NC << " | ";
/////////////////////////////////////////////////////////////////////////////////
			firstname = contact[i].getfirstname();
			if (firstname.size() > 9)
			{
				firstname.resize(9);
				firstname.push_back('.');
			}
			if (firstname.size() < 9)
			{
				while (firstname.size() < 9)
					firstname.push_back(' ');
			}
			std::cout << RED << firstname << NC << " | ";
/////////////////////////////////////////////////////////////////////////////////
			lastname = contact[i].getlastname();
			if (lastname.size() > 9)
			{
				lastname.resize(9);
				lastname.push_back('.');
			}
			if (lastname.size() < 9)
			{
				while (lastname.size() < 9)
					lastname.push_back(' ');
			}
			std::cout << RED << lastname << NC << " | ";
/////////////////////////////////////////////////////////////////////////////////
			nickname = contact[i].getnickname();
			if (nickname.size() > 9)
			{
				nickname.resize(9);
				nickname.push_back('.');
			}
			if (nickname.size() < 9)
			{
				while (nickname.size() < 9)
					nickname.push_back(' ');
			}
			std::cout << RED << nickname << std::endl;
/////////////////////////////////////////////////////////////////////////////////
			i++;
		}
		std::cout << NC << std::endl;
	}
}
