/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:07:42 by corellan          #+#    #+#             */
/*   Updated: 2023/06/17 13:23:36 by corellan         ###   ########.fr       */
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

	std::cout << "CREATING AN ANIMAL OF TYPE MONSTER" << std::endl;
	default1 = new Animal("monster");
	std::cout << std::endl << "NOW TESTING THE COPY CONSTRUCTOR OF THE CLASS ANIMAL, PASSING *DEFAULT1 TO ALLOCATE DEFAULT2" << std::endl;
	default2 = new Animal(*default1);
	std::cout << std::endl << "NOW TESTING CREATING AN ANIMAL WITH A DEFAULT CLASS" << std::endl;;
	default3 = new Animal();
	std::cout << std::endl << "NOW TESTING THE COPY ASSIGMENT OF THE ANIMAL CLASS WHEN TYPE OF POINTER MATCH (*default3 = *default1)" << std::endl;
	*default3 = *default1;
	std::cout << std::endl << "INITIALIAZING *kida AS A DOG POINTER" << std::endl;
	kida = new Dog("expensive");
	std::cout << std::endl << "INITIALIAZING *annelli AS A CAT POINTER" << std::endl;
	anneli = new Cat("cute");
	std::cout << std::endl << "INITIALIZING *CP1 A DEFAULT DOG CLASS" << std::endl;
	cp1 = new Dog();
	std::cout << std::endl << "INITIALIZING *CP2 A DEFAULT CAT CLASS" << std::endl;
	cp2 = new Cat();
	std::cout << std::endl << "TESTING THE COPY ASSIGMENT OPERATOR OF THE CAT CLASS, SAYING THAT *cp1 = *kida" << std::endl;
	*cp1 = *kida;
	std::cout << std::endl << "TESTING THE COPY ASSIGMENT OPERATOR OF THE DOG CLASS, SAYING THAT *cp2 = *anneli" << std::endl;
	*cp2 = *anneli;
	std::cout << std::endl << "TESTING THE COPY ASSIGMENT OPERATOR OF THE ANIMAL CLASS, WHEN YOU PASS A SUBCLASS AS A PARAMETER (*default3(Animal) = *kida(Dog))" << std::endl;
	*default3 = *kida;
	std::cout << std::endl << "TESTING THE EQUALITY BETWEEN TWO DIFFERENT CLASSES, TYPECASTING *kida (DOG CLASS) AS A CAT CLASS" << std::endl;
	*anneli = *(reinterpret_cast<Cat*>(kida));
	std::cout << std::endl << "TESTING IF THE COPY *cp1 WORKS TO INITIALIZE THE POINTER *miina WITH THE COPY CONSTRUCTOR OF THE DOG CLASS" << std::endl;
	miina = new Dog(*cp1);
	std::cout << std::endl << "TESTING IF THE COPY *cp2 WORKS TO INITIALIZE THE POINTER *luli WITH THE COPY CONSTRUCTOR OF THE DOG CLASS" << std::endl;
	luli = new Cat(*cp2);
	std::cout << std::endl << "PRINTING THE BRAIN OF *luli" << std::endl;
	luli->printBrain();
	std::cout << std::endl << "DELETING (\"FREEING\") EVERYTHING" << std::endl;
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