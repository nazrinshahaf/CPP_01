/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:28:52 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/08 13:19:04 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Zombie::Zombie(string name)
{
	this->name = name;
	cout << "Zombie with name [" << this->name << "] has been made" << endl;
	return ;
}

Zombie::~Zombie()
{
	cout << "Zombie with name [" << this->name << "] has been shot in the head" << endl;
	return ;
}

void	Zombie::announce(void) const
{
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

string	Zombie::getName(void) const
{
	return (this->name);
}
