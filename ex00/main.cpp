/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:01:39 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/08 15:37:55 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

using std::cout;
using std::endl;

int	main()
{
	{
		cout << "Test 1" << endl;
		Zombie("sohai");
		cout << endl;
	}
	{
		cout << "Test 2" << endl;
		randomChump("sohai");
		cout << "Shuold be after destructor" << endl;
		cout << endl;
	}
	{
		cout << "Test 3" << endl;
		Zombie *Sohai = newZombie("sohai");
		Sohai->announce();
		delete Sohai;
		cout << endl;
	}
	{
		cout << "Test 4" << endl;
		Zombie *Sohai = newZombie("sohai");
		Sohai->announce();
		delete Sohai;
		cout << endl;
	}
}
