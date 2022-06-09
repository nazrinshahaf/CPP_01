/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:39:49 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/09 12:24:44 by nfernand         ###   ########.fr       */
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
		cout << "./Sed <filename> <word_to_find> <word_to_replace_with>" << endl;
	}
	else
		CustomSed	r1(argv[1], argv[2], argv[3]);
}
