/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CustomSed.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:14:42 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/17 12:03:53 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUSTOMSED_HPP
# define CUSTOMSED_HPP

#include <iostream>
#include <string>
#include <istream>
#include <fstream>

using std::string;

class	CustomSed	
{
	public:
		CustomSed(string filename, string s1, string s2);
		~CustomSed(void);
		void	print_info(void);
		void	print_error(void);
		void	replace(void);

	private:
		string			s1;
		string			s2;
		string			filename;
		std::ifstream	inputFileStream;
};

#endif
