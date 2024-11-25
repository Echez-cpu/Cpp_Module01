/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:56:11 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/25 19:43:56 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(int argc, char **argv) 
{
    if (argc != 2) 
	{
        std::cout << "\033[31mUsage:\033[0m ./harlFilter <level>" << std::endl;
        return 1;
    }

    Harl harl;
    harl.complain(argv[1]);

    return 0;
}
