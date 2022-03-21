/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:01:31 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/15 16:13:11 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

using std::cout;
using std::endl;

int	main()
{
	{
		cout << "Test 1" << endl;
		Weapon Club	= Weapon("Blunt Club");

		HumanA Steve = HumanA("Steve", Club);
		Steve.Attack();
		Club.setType("Spiked Club");
		Steve.Attack();
	}
	{
		cout << endl;
		cout << "Test 2" << endl;
		Weapon Club = Weapon("Blunt Club");

		HumanB Josh = HumanB("Josh");
		Josh.Attack();
		Josh.setWeapon(Club);
		Josh.Attack();
		Club.setType("Spiked Club");
		Josh.Attack();
	}
	return 0;
}
