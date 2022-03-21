/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:44:06 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/15 15:30:07 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

using std::string;

class Weapon
{
	public:
		Weapon(string name);
		~Weapon(void);
		const std::string getType(void);
		void setType(string newType);

	private:
		string type;
};

#endif
