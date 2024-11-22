/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:28:55 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/22 16:34:35 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void replaceInFile(const str &filename, const str &s1, const str &s2)
{
    std::ifstream infile(filename.c_str());
    if (!infile.is_open())
	{
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open())
	{
        std::cerr << "Error: Could not create output file." << std::endl;
        return;
    }

    str line;
    while (std::getline(infile, line))
	{
        str newLine;
        size_t pos = 0;
        size_t found;

        while ((found = line.find(s1, pos)) != std::string::npos)
        {

            newLine.append(line, pos, found - pos);
            newLine.append(s2);
             pos = found + s1.length();
        }
        newLine.append(line, pos);

        outfile << newLine << std::endl;
    }

    std::cout << "File created successfully. New file: " << filename << ".replace" << std::endl;
}
