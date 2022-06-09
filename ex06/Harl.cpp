/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:36:08 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/09 15:26:34 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "colours.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(string level)
{
	int	complainLevel = -1;

	string	complainStatus[] =
	{
		"debug",
		"info",
		"warning",
		"error"
	};
	for (int i = 0; i < 4; i++)
		if (level == complainStatus[i])
			complainLevel = i;
	switch	(complainLevel)
	{
		case -1: {
			defaultMessage();
			break ;
		}
		case 0: {
			debug();
			cout << endl;
		}
		case 1: {
			info();
			cout << endl;
		}
		case 2: {
			warning();
			cout << endl;
		}
		case 3: {
			error();
			cout << endl;
		}
	}
}

void	Harl::debug(void)
{
	cout << BLUE "[DEBUG]" RESET << endl;
	cout << BLUE "I love having extra bacon for my "
		"7XL-double-cheese-triple-pickle-specialketchup burger." RESET << endl;
	cout << BLUE "I really do!" RESET << endl;
}

void	Harl::info(void)
{
	cout << GREEN "[INFO]" RESET << endl;
	cout << GREEN "I cannot believe adding extra bacon costs more money." RESET << endl;
	cout << GREEN "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" RESET << endl;
}
void	Harl::warning(void)
{
	cout << YELLOW "[WARNING]" RESET << endl;
	cout << YELLOW "I think I deserve to have some extra bacon for free." RESET << endl;
	cout << YELLOW "I’ve been coming for years whereas you started working here since last month." RESET << endl;
}

void	Harl::error(void)
{
	cout << RED "[ERROR]" RESET << endl;
	cout << RED "This is unacceptable! I want to speak to the manager now." RESET << endl;
}

void	Harl::defaultMessage(void)
{
	cout << MAGENTA "[ Probably complaining about insignificant problems ]" RESET << endl;
}
