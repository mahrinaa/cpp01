/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:07:45 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:07:47 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void testNormal()
{
    std::cout << "\n=== Test normal : 5 zombies ===" << std::endl;

    Zombie* horde = zombieHorde(5, "Normal");

    if (!horde)
    {
        std::cout << "Erreur : horde NULL" << std::endl;
        return;
    }

    for (int i = 0; i < 5; i++)
        horde[i].announce();

    delete[] horde;
}

void testEmptyName()
{
    std::cout << "\n=== Test nom vide ===" << std::endl;

    Zombie* horde = zombieHorde(3, "");

    for (int i = 0; i < 3; i++)
        horde[i].announce();

    delete[] horde;
}

void testZeroZombies()
{
    std::cout << "\n=== Test N = 0 ===" << std::endl;

    Zombie* horde = zombieHorde(0, "NoZombie");
    if (horde == NULL)
        std::cout << "Aucune horde cree (NULL) : OK" << std::endl;
}

void testNegativeNumber()
{
    std::cout << "\n=== Test N negatif ===" << std::endl;

    Zombie* horde = zombieHorde(-10, "ErrorZombie");
    if (horde == NULL)
        std::cout << "Negatif -> NULL : OK" << std::endl;
}

void testLargeHorde()
{
    std::cout << "\n=== Test grande horde :10 zombies ===" << std::endl;

    Zombie* horde = zombieHorde(10, "MegaZombie");

    //Affiche juste les 3 premiers pour eviter le spam
    horde[0].announce();
    horde[1].announce();
    horde[2].announce();

    delete[] horde;
}

int main()
{
    testNormal();
    testEmptyName();
    testZeroZombies();
    testNegativeNumber();
    testLargeHorde();

    return 0;
}

/* int main(void)
{
	std::cout << "_____________________________________" << std::endl;

	int N = 3;
	std::string name = "HordeZombie";

	//creation horde de N zombie
	Zombie* horde = zombieHorde(N, name);

	//verifier si l'alloc est vide
	if (!horde)
		return (1);

	//chaque zombie annonce son nom
	for (int i = 0; i < N; i++)
	{
		std::cout << i + 1 << " : ";
		horde[i].announce();
	}
		
	delete [] horde;
	return (0);
} */