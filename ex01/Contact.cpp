/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:19:22 by tidigov           #+#    #+#             */
/*   Updated: 2023/02/21 16:30:34 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

Contact::Contact() {}
Contact::~Contact(void) {}

/////////////////////////////////////////////////////////////////////////////////
std::string	Contact::getfirstname(void) const {
	return this->_firstname;
}

void	Contact::setfirstname(std::string str) {
	Contact::_firstname = str;
}
/////////////////////////////////////////////////////////////////////////////////
std::string	Contact::getlastname(void) const {
	return this->_lastname;
}

void	Contact::setlastname(std::string str) {
	Contact::_lastname = str;
}
/////////////////////////////////////////////////////////////////////////////////
std::string	Contact::getnickname(void) const {
	return this->_nickname;
}

void	Contact::setnickname(std::string str) {
	Contact::_nickname = str;
}
/////////////////////////////////////////////////////////////////////////////////
std::string	Contact::getphonenumber(void) const {
	return this->_phonenumber;
}

void	Contact::setphonenumber(std::string str) {
	Contact::_phonenumber = str;
}
/////////////////////////////////////////////////////////////////////////////////
std::string	Contact::getdarkestsecret(void) const {
	return this->_darkestsecret;
}

void	Contact::setdarkestsecret(std::string str) {
	Contact::_darkestsecret = str;
}
