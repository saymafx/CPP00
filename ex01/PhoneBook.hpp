/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:18:30 by tidigov           #+#    #+#             */
/*   Updated: 2023/02/21 20:46:28 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#define NC "\e[0m"
#define RED "\e[0;31m"

class PhoneBook	{

public:
    PhoneBook(void);
    ~PhoneBook(void);
    

    int		index;
    void	search_contact(int index);
    void	add_contact(int index);
    void	return_contact(int index);

private:

    Contact	contact[8];
	
};


#endif 