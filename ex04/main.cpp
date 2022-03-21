/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:39:49 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/17 11:34:26 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <istream>
#include <fstream>
#include "colours.h"
#include "CustomSed.hpp"

using std::cout;
using std::endl;
using std::string;

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		cout << "Please enter the right amount of arguments." << endl;
		cout << "./Sed <filename> <string 1> <string 2>" << endl;
	}
	else
	{
		string	filename = argv[1];
		//std::ifstream input_stream(filename);
		//string	line;
		
		//if (!input_stream)
		//	cout << RED "Cant open file with filename <" << filename << ">" RESET << endl;

		//while (getline(input_stream, line))
		//	cout << line << endl;

		CustomSed	r1(filename, argv[2], argv[3]);
	}
}
