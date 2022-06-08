/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:26:36 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/08 15:56:53 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

//just for purposes of testing i wrote this after finishing all cpp modules
#include <sstream>
std::string intToString(int n)
{
	std::ostringstream ss;
	ss << n;
	return ss.str();
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*firstZombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		firstZombie[i].setName(name + " " + intToString(i));
	return (firstZombie);
}
