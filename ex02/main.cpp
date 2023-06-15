/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:14:21 by corellan          #+#    #+#             */
/*   Updated: 2023/06/15 15:26:04 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Horse.hpp"

int	main(void)
{
	//const AAnimal		*meta = new AAnimal(); (it doesn't work and I shouldn't work)
	const AAnimal		*j = new Dog();
	const AAnimal		*i = new Cat();
	const AAnimal		*k = new Horse();

	std::cout << std::endl;
	std::cout << "I am a " << j->getType() << " " << std::endl;
	std::cout << "I am a " << i->getType() << " " << std::endl;
	std::cout << "I am a " << k->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	k->makeSound();
	std::cout << std::endl;
	std::cout << "i is printing its thoughts" << std::endl;
	i->printBrain();
	std::cout << "j is printing its thoughts" << std::endl;
	j->printBrain();
	std::cout << "k is printing its thoughts" << std::endl;
	k->printBrain();
	std::cout << std::endl;
	//meta->makeSound();
	//delete meta;
	delete i;
	delete j;
	delete k;
	return (0);
}