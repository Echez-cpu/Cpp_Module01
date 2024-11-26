/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:28:55 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/26 16:02:40 by pokpalae         ###   ########.fr       */
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

    if (infile.peek() == std::ifstream::traits_type::eof()) 
    {
        std::cerr << "\033[33mWarning\033[0m: The input file is empty. No replacements were made." << std::endl;
        infile.close();
        return;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open())
	{
        std::cerr << "Error: Could not create output file." << std::endl;
        infile.close();
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
        
        if (infile.bad())
        {
            std::cerr << "Error: Failed to read the input file due to an I/O error." << std::endl;
            infile.close();
            outfile.close();
            return;
        }
    }

    infile.close();
    outfile.close();

    std::cout << "\033[32mFile created successfully. New file\033[0m: " << filename << ".replace" << std::endl;
}
