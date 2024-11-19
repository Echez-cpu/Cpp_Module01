/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:33:23 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/19 15:01:40 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(void)
{
    int numZombies = 6;
    str zombieName = "demon";

    Zombie* horde = zombieHorde(numZombies, zombieName);

    if (horde) 
	{
		int i = 0;
		
		while(i < numZombies)
		{
			horde[i].announce();
			i++;
		}

        delete[] horde;
    } 
	
	else 
	{
        std::cout << "Failed to create a horde of zombies." << std::endl;
    }

    return 0;
}