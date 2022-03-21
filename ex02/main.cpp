/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:55:18 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/14 15:23:38 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int	main()
{
	{
		string	stringVar = "HI THIS IS BRAIN";
		string	*stringPtr = &stringVar;
		string	&stringRef = stringVar;

		cout << "Text at address contains: " << stringVar << endl;
		cout << "Text at address contains: " << *stringPtr << endl;
		cout << "Text at address contains: " << stringRef << endl << endl;

		cout << "Address: " << &stringVar << endl;
		cout << "Address: " << &(*stringPtr) << endl;
		cout << "Address: " << &(stringRef) << endl << endl;
	}
}
