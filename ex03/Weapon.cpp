/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:46:59 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/08 17:26:40 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

Weapon::Weapon(string name)
{
	this->type = name;
	cout << "Weapon of type <" << this->type << "> has been created." << endl;
}

Weapon::~Weapon(void)
{
	cout << "Weapon of type <" << this->type << "> has been destroyed." << endl;
}

void			Weapon::setType(string const &newType)
{
	this->type = newType;
}

const string	&Weapon::getType(void) const
{
	return (this->type);
}
