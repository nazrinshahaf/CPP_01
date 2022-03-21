/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:49:28 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/15 15:42:06 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

using std::string;

class	HumanA
{
	public:
		HumanA(string name, Weapon &weapon);
		~HumanA(void);

		void	Attack(void);
		Weapon&	getWeapon(void) const;

	private:
		Weapon	&weapon;
		string	name;
};

#endif
