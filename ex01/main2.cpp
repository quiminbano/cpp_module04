/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:07:42 by corellan          #+#    #+#             */
/*   Updated: 2023/06/16 12:48:20 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Dog		*kida;
	Dog		*cp1;
	Dog		*miina;
	Cat		*anneli;
	Cat		*luli;
	Cat		*cp2;
	Animal	*default1;
	Animal	*default2;
	Animal	*default3;

	default1 = new Animal("monster");
	std::cout << std::endl;
	default2 = new Animal(*default1);
	std::cout << std::endl;
	default3 = new Animal();
	std::cout << std::endl;
	*default3 = *default1;
	std::cout << std::endl;
	kida = new Dog("expensive");
	std::cout << std::endl;
	anneli = new Cat("cute");
	std::cout << std::endl;
	cp1 = new Dog();
	std::cout << std::endl;
	cp2 = new Cat();
	std::cout << std::endl;
	*cp1 = *kida;
	std::cout << std::endl;
	*cp2 = *anneli;
	std::cout << std::endl;
	*default3 = *kida;
	std::cout << std::endl << std::endl; 
	*anneli = *(reinterpret_cast<Cat*>(kida));
	std::cout << std::endl << std::endl;
	miina = new Dog(*cp1);
	std::cout << std::endl;
	std::cout << "ANALiZING LULI" << std::endl;
	luli = new Cat(*cp2);
	luli->printBrain();
	std::cout << "Luli is ready" << std::endl << std::endl;
	delete default1;
	std::cout << std::endl;
	delete default2;
	std::cout << std::endl;
	delete default3;
	std::cout << std::endl;
	delete kida;
	std::cout << std::endl;
	delete cp1;
	std::cout << std::endl;
	delete miina;
	std::cout << std::endl;
	delete anneli;
	std::cout << std::endl;
	delete luli;
	std::cout << std::endl;
	delete cp2;
	return (0);
}