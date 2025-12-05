/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 03:19:25 by mai               #+#    #+#             */
/*   Updated: 2025/12/05 15:18:57 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void testNormal()
{
    std::cout << "\n=== Test normal : 5 zombies ===" << std::endl;

    Zombie* horde = zombieHorde(5, "NormalZombie");

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
        std::cout << "Aucune horde créée (NULL) : OK" << std::endl;
}

void testNegativeNumber()
{
    std::cout << "\n=== Test N négatif ===" << std::endl;

    Zombie* horde = zombieHorde(-10, "ErrorZombie");
    if (horde == NULL)
        std::cout << "Négatif → NULL : OK" << std::endl;
}

void testLargeHorde()
{
    std::cout << "\n=== Test grande horde :10 zombies ===" << std::endl;

    Zombie* horde = zombieHorde(10, "MegaZombie");

    // On affiche juste les 3 premiers pour éviter le spam
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