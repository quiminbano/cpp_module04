/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:14:21 by corellan          #+#    #+#             */
/*   Updated: 2023/06/15 11:31:14 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal	*j[4];
	int				i;

	i = 0;
	while (i < 4)
	{
		if (i < 2)
			j[i] = new Dog("Dog");
		else
			j[i] = new Cat("Cat");
		i++;
	}
	i = 0;
	std::cout << std::endl;
	//Testing the ability of the copy constructor of the Dog and Cat classes (deep copy)
	Animal	*k = new Dog(*static_cast<const Dog *>(j[0]));
	std::cout << std::endl;
	Animal	*n = new Cat(*static_cast<const Cat *>(j[2]));
	std::cout << std::endl;
	std::cout << j[0]->getType() << std::endl;
	std::cout << k->getType() << std::endl;
	std::cout << j[2]->getType() << std::endl;
	std::cout << n->getType() << std::endl;
	std::cout << std::endl;
	j[0]->printAddressBrain();
	k->printAddressBrain();
	j[2]->printAddressBrain();
	n->printAddressBrain();
	std::cout << std::endl;
	std::cout << "j[0]:" << std::endl;
	j[0]->printBrain();
	std::cout << "k:" << std::endl;
	k->printBrain();
	std::cout << "j[2]:" << std::endl;
	j[2]->printBrain();
	std::cout << "n:" << std::endl;
	n->printBrain();
	std::cout << std::endl;
	while (i < 4)
	{
		delete j[i];
		i++;
	}
	std::cout << std::endl;
	delete k;
	delete n;
	return (0);
}