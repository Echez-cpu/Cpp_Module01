/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:44:50 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/19 15:07:20 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


Zombie* newZombie(str name);
void randomChump(str name);

int main(void)
{
    
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();

    randomChump("StackZombie");

    delete heapZombie;

    return 0;
}