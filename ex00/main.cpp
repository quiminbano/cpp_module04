/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:14:21 by corellan          #+#    #+#             */
/*   Updated: 2023/06/09 16:40:29 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal		*meta = new Animal();
	const Animal		*j = new Dog();
	const Animal		*i = new Cat();
	const WrongAnimal	*k = new WrongCat();

	std::cout << "I am a " << j->getType() << " " << std::endl;
	std::cout << "I am a " << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	std::cout << "I am a " << k->getType() << " " << std::endl;
	k->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	delete meta;
	delete i;
	delete j;
	delete k;
	return (0);
}