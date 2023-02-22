/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:18:17 by tidigov           #+#    #+#             */
/*   Updated: 2023/02/21 18:59:58 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "iostream"
#include "iomanip"
#define NC "\e[0m"
#define RED "\e[0;31m"

class Contact {

public:
    Contact(void);
    ~Contact(void);
    
    int         index;
	std::string	getfirstname(void) const;
    // std::string	getlastname(void) const;
	// std::string	getnickname(void) const;
	// std::string	getnumber(void) const;
	// std::string	getdarksecret(void) const;
	void	setfirstname(std::string firstname);
	// void	setlastname(std::string LastName);
	// void	setnickname(std::string NickName);
	// void	setnumber(std::string Number);
	// void	setdarksecret(std::string DarkSecret);
    
private:

    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darkestsecret;
};

#endif