/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:39:21 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/19 16:56:29 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

     std::cout << "\033[34m" << "Memory address of the string variable: " << &str << std::endl;

    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;

    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "\033[32m" << "Value of the string variable: " << str << std::endl;

    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    std::cout << "\033[0m";

    return 0;
}