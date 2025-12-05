/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 02:42:25 by mai               #+#    #+#             */
/*   Updated: 2025/12/05 03:10:11 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "_________________________________" << std::endl;
	randomChump("StackZombie");

	std::cout << "_________________________________" << std::endl;
	//cree un zombie dans la heap
	Zombie* heapZombie = newZombie("HeapZombie");
	//annonce le zombie dans la heap
	heapZombie->announce();
	//delete le zombie de la heap
	delete heapZombie;
	//cree un zombie dans la stack

	return (0);
}