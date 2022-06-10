/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CustomSed.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:19:42 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/10 11:41:09 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CustomSed.hpp"
#include "colours.h"
#include <iostream>
#include <string>
#include <istream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;

CustomSed::CustomSed(string filename, string s1, string s2)
{
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;

	print_info();
	if (s1 == "")
	{
		cout << RED "Please don't pass empty string as search value." RESET << endl;
		return ;
	}
	this->inputFileStream.open(filename);
	if (!inputFileStream.is_open())
	{
		print_error();
		return ;
	}
	else
	{
		replace();
		inputFileStream.close();
	}
}

CustomSed::~CustomSed(void)
{
}

void	CustomSed::print_info(void)
{
	cout << CYAN "File to replace :	<" << this->filename << ">" RESET << endl;
	cout << CYAN "String to find :	\"" << this->s1 << "\"" RESET << endl;
	cout << CYAN "String to replace :	\"" << this->s2 << "\"" RESET << endl;
}

void	CustomSed::print_error(void)
{
	cout << RED "Cant open file with filename <" << this->filename << ">" RESET << endl;
	cout << RED "Please use an existing file." << endl;
}

void	CustomSed::replace()
{
	string			line;
	string			res;
	std::size_t		found;
	std::ofstream	outputFileStream;

	while (getline(this->inputFileStream, line))
	{
		found = line.find(s1);
  		if (found!=std::string::npos)
		{
			res.append(line, 0, found);
			res.append(s2);
			res.append(line, found + s1.length(), s1.length() + 1);
			res.push_back('\n');
		}
		else
		{
			res.append(line);
			res.push_back('\n');
		}
	}
	outputFileStream.open(this->filename + ".replace");
	outputFileStream << res;
	outputFileStream.close();
}
