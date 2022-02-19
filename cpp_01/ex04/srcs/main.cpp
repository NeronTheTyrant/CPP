/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:02:40 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/19 01:14:30 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	getFileContent(std::string fileName, std::string & buffer) {
	std::string	line;

	std::ifstream	ifs(fileName.c_str());
	if (!ifs.good())
		return (1);
	while (true)
	{
		std::getline(ifs, line);
		if (ifs.eof())
			break ;
		else
			line += '\n';
		buffer += line;
	}
	ifs.close();
	return (0);
}

void	replace(std::string &buffer, std::string s1, std::string s2)
{
	std::string::size_type	n;

	while (true)
	{
		n = buffer.find(s1);
		if (n != std::string::npos)
		{
			buffer.erase(n, s1.length());
			buffer.insert(n, s2);
		}
		else
			break;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Bad arguments" << std::endl;
		return (0);
	}
	std::string		buffer = "";
	if (getFileContent(argv[1], buffer))
	{
		std::cout << "Error: " << argv[1] << ": not a valid file" << std::endl;
		return (1);
	}
	replace(buffer, argv[2], argv[3]);

	std::string	replacename = argv[1];
	replacename += ".replace";
	std::ofstream ofs(replacename.c_str());
	if (!ofs.good())
	{
		std::cout << "Error: failed to create replace file" << std::endl;
		return (1);
	}
	ofs << buffer;
	ofs.close();
}
