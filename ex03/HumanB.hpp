/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:44:43 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/15 16:07:40 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

using std::string;

class	HumanB
{
	public:
		HumanB(string name);
		~HumanB(void);

		void	Attack(void) const;
		Weapon& getWeapon(void) const;
		void	setWeapon(Weapon &newWeapon);

	private:
		Weapon	*weapon;
		string	name;
};

#endif
