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

PhoneBook::PhoneBook(){
    
}

PhoneBook::~PhoneBook(void){
    
}

void	PhoneBook::add_contact(int id)
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;
	
	std::cout << "Enter your first name: ";
	getline(std::cin, firstname);
	contact[index].setfirstname(firstname);
	
	std::cout << "Enter your first name: ";
	getline(std::cin, firstname);
	contact[index].setfirstname(firstname);

	std::cout << "Enter your first name: ";
	getline(std::cin, firstname);
	contact[index].setfirstname(firstname);

	std::cout << "Enter your first name: ";
	getline(std::cin, firstname);
	contact[index].setfirstname(firstname);

	std::cout << "Enter your first name: ";
	getline(std::cin, firstname);
	contact[index].setfirstname(firstname);
}

void    PhoneBook::search_contact(int index)
{
    std::string firstname;
    std::string lastname;
    std::string nickname;

    //firstname = (getline(std::cin, con.firstname), 9);
	//lastname = (getline(std::cin, con.lastname), 9);
	// lastname.copy(con.lastname, 9);
	// nickname.copy(con.nickname, 9);
	std::cout << contact[0].getfirstname() << std::endl;

	// firstname.resize(9);
	// lastname.resize(9);
	// // nickname.resize(9);
	// firstname.push_back('.');
	// lastname.push_back('.');
	// // nickname.push_back('.');
	// std::cout << firstname << std::endl;
	// std::cout << lastname << std::endl;
	// std::cout << lastname << std::endl;
}
