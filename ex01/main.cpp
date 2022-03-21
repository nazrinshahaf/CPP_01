/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:01:39 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/14 14:53:35 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

using std::cout;
using std::endl;

int	main()
{
	{
		int	ZombieCount = 10;
		Zombie *firstZombie = zombieHorde(ZombieCount, "sohai");
		cout << endl;
		for (int i = 0; i < ZombieCount; i++)
		{
			cout << &firstZombie[i] << " ";
			firstZombie[i].announce();
		}
		cout << endl;
		delete [] firstZombie;
	}
}
