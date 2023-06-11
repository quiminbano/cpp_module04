/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:14:21 by corellan          #+#    #+#             */
/*   Updated: 2023/06/11 13:54:29 by corellan         ###   ########.fr       */
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

	std::cout << "I am a " << j->getType() << " " << std::endl;
	std::cout << "I am a " << i->getType() << " " << std::endl;
	std::cout << "I am a " << k->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	k->makeSound();
	//meta->makeSound();

	std::cout << std::endl;
	//delete meta;
	delete i;
	delete j;
	delete k;
	return (0);
}