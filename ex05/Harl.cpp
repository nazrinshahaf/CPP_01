/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:36:08 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/13 16:03:34 by nfernand         ###   ########.fr       */
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
	void	(Harl::*complainFunc[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	string	complainStatus[] = 
	{
		"debug",
		"info",
		"warning",
		"error"
	};
	for (int i = 0; i < 5; i++)
	{
		void	(Harl::*chosenComplain)(void) = complainFunc[i];
		if (level == complainStatus[i])
			(this->*chosenComplain)();
	}
}

void	Harl::debug(void)
{
	cout << BLUE "I love having extra bacon for my "
		"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" RESET << endl;
}

void	Harl::info(void)
{
	cout << GREEN "I cannot believe adding extra bacon costs more money. You didn’t put "
		"enough bacon in my burger! If you did, I wouldn’t be asking for more!" RESET << endl;
}
void	Harl::warning(void)
{
	cout << YELLOW "I think I deserve to have some extra bacon for free. I’ve been coming for "
		"years whereas you started working here since last month." RESET << endl;
}

void	Harl::error(void)
{
	cout << RED "This is unacceptable! I want to speak to the manager now." RESET << endl;
}
