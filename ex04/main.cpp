/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:45:31 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/22 22:04:56 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

int main(int argc, char **argv)
{
    if (argc != 4) 
    {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    str filename = argv[1];
    str s1 = argv[2];
    str s2 = argv[3];

    replaceInFile(filename, s1, s2);

    return 0;
}
