/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:28:31 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/09 15:24:03 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

#include "colours.h"

int	main(int argc, char **argv)
{
	Harl	Harl;

	if (argc == 2)
	{
		std::string input = (std::string)argv[1];
		transform(input.begin(), input.end(), input.begin(), ::tolower);
		Harl.complain(input);
	}
	else
		std::cout << RED "Please only pass in one argument" RESET << std::endl;
}
