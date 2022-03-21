/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:26:36 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/14 14:46:36 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*firstZombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		firstZombie[i].setName(name);
	return (firstZombie);
}
