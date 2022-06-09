/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:28:31 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/09 14:47:37 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include <random>

#include "Harl.hpp"

#include "colours.h"

using std::cout;
using std::endl;

int	main()
{
	Harl	Harl;

	Harl.complain("debug");
	Harl.complain("info");
	Harl.complain("warning");
	Harl.complain("error");

	cout << endl;
	cout << MAGENTA "Generating random complain status..." RESET << endl;
	srand(time(0));

	string	complainStatus[] = 
	{
		"debug",
		"info",
		"warning",
		"error"
	};
	for (int i = 0 ; i < 4; i++)
		Harl.complain(complainStatus[rand() % 4]);

	cout << endl;
	cout << MAGENTA "Generating a non-existant complain status..." RESET << endl;
	Harl.complain("lmao123");
}
