/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:47:23 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/15 16:14:17 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

HumanB::HumanB(string name): weapon(NULL), name(name)
{
	cout << this->name << " has been created with no weapon and is using his <Bare First>." << endl;
}

HumanB::~HumanB(void)
{
	cout << this->name << " has been killed." << endl;
}

void	HumanB::Attack(void) const
{
	if (this->weapon)
		cout << this->name << " Attacks with his <" << this->weapon->getType() << ">." << endl;
	else
		cout << this->name << " Attacks with his <Bare Fist>." << endl;
}

Weapon&	HumanB::getWeapon(void) const
{
	return (*(this->weapon));
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	if (newWeapon.getType() == "")
	{
		cout << "Weapon with no name can't be used" << endl;
		return ;
	}
	else
		this->weapon = &newWeapon;
}
