/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwidmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:39:38 by lwidmer           #+#    #+#             */
/*   Updated: 2023/06/07 11:21:15 by lwidmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MEGAPHONE_H
# define MEGAPHONE_H
# include <iostream>
#endif

std::string ConvertToUppercase(const std::string& str) 
{
    std::string result;
    result.reserve(str.length());

    for (char c : str)
	{
        result.push_back(std::toupper(c));
    }
    return result;
}

int main(int argc, char **argv)
{
	//Megaphone obj;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			std::string arg(argv[i]);
			std::cout << ConvertToUppercase(arg);
		}
		std::cout << std::endl;
	}
	return (0);
}
