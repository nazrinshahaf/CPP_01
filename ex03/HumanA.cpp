/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:53:17 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/15 15:42:20 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
#include <string>

using std::endl;
using std::cout;

HumanA::HumanA(string name, Weapon &weapon): weapon(weapon)
{
	this->name = name;
	cout << this->name << " has been created with weapon <" << this->weapon.getType() << "> in hand." << endl;
}

HumanA::~HumanA()
{
	cout << this->name << " has been killed." << endl;
}

void	HumanA::Attack(void)
{
	cout << this->name << " Attacks with his <" << this->weapon.getType() << ">." << endl;
}

Weapon&	HumanA::getWeapon(void)	const
{
	return (this->weapon);
}
