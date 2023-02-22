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

Contact::Contact(){
    
}

Contact::~Contact(void){
    
}

std::string	Contact::getfirstname(void) const {
	return this->_firstname;
}

void	Contact::setfirstname(std::string str) {
	Contact::_firstname = str;
}

// std::string	Contact::getlastname(void) {
// 	return this->lastname;
// }

// std::string	Contact::getnickname(void) {
// 	return this->nickname;
// }