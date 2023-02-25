/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:24:48 by tidigov           #+#    #+#             */
/*   Updated: 2022/12/23 16:34:52 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define NC "\e[0m"
#define RED "\e[0;31m"

int main(int ac, char **av)
{
    int 	a;
    int 	i;
	char	c;
	std::string	str;

    a = 1;
    i = 0;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
    while (av[a])
    {
		while (av[a][i])
		{
			str = toupper(av[a][i]);
			std::cout << RED << str;
			i++;
		}
		a++;
    }
	return 0;
}
