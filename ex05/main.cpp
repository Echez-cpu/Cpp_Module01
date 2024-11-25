/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:32:02 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/25 16:54:14 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(void)
{
    Harl harl;

    std::cout << "\033[32mTesting with different levels:\033[0m" << std::endl <<  "\033[34mRESULT:\033[0m ";
    harl.complain("INFO");

    return 0;
}
