/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:08:21 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:08:25 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "_________________________________" << std::endl;
	
	//Cree un zombie dans la stack
	randomChump("StackZombie");

	std::cout << "_________________________________" << std::endl;
	
	//Cree un zombie dans la heap
	Zombie* heapZombie = newZombie("HeapZombie");
	
	//Annonce le zombie dans la heap
	heapZombie->announce();
	
	//Delete le zombie de la heap
	delete heapZombie;

	return (0);
}