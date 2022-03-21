/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:28:31 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/18 18:10:50 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl	Harl;

	if (argc == 2)
	{
		std::string input = (std::string)argv[1];
		transform(input.begin(), input.end(), input.begin(), ::tolower);
		Harl.complain(input);
	}
}
