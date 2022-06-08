/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:44:06 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/08 17:26:53 by nfernand         ###   ########.fr       */
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
		~Weapon();

		const string	&getType(void) const;
		void			setType(string const &newType);

	private:
		string type;
};

#endif
