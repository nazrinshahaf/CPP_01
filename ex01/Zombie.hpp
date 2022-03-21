/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:25:31 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/14 14:41:04 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

using std::string;

class Zombie 
{
	public:
		Zombie();
		~Zombie();
		void	announce(void) const;
		string	getName(void) const;
		void	setName(string name);

	private:
		string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
