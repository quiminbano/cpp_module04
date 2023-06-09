/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:11:55 by corellan          #+#    #+#             */
/*   Updated: 2023/06/16 12:55:19 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(NULL)
{
	std::cout << "Default constructor for Cat class called" << std::endl;
	this->_brain = new Brain("Meow Meow Cat Meow Meow");
	return ;
}

Cat::Cat(std::string type) : Animal(type), _brain(NULL)
{
	this->_type = type;
	std::cout << "Constructor for Cat class called with the type " << this->_type << std::endl;
	this->_brain = new Brain("Meow Meow Cat Meow Meow");
	return ;
}

Cat::Cat(Cat const &rhs) : Animal("Cat"), _brain(NULL)
{
	std::cout << "Copy constructor for Cat class called" << std::endl;
	*this = rhs;
	return ;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Destructor for Cat class called" << std::endl;
	return ; 
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::string	temp = rhs.getTypeOfClass().name();
	std::string temp2 = this->getTypeOfClass().name();
	Cat			*ptr = const_cast<Cat*>(&rhs);

	std::cout << "Copy assigment for Cat class called" << std::endl;
	if (this != &rhs)
	{
		if (ptr == NULL)
		{
			std::cout << "You are using the copy assigment operator passing a reference of a NULL pointer. Aborting mission" << std::endl;
			if (this->_brain == NULL)
				this->_brain = new Brain("Meow Meow Cat Meow Meow"); 
			return (*this);
		}
		if (temp.compare(temp2) != 0)
		{
			std::cout << "You are trying to use the copy assigment operator in two different animals. Aborting mission" << std::endl;
			if (this->_brain == NULL)
				this->_brain = new Brain("Meow Meow Cat Meow Meow");
			return (*this);
		}
		this->_type = rhs._type;
		if (this->_brain != NULL)
		{
			delete this->_brain;
			this->_brain = NULL;
		}
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "I am a " << this->_type << " and I say Meowwwww" << std::endl;
	return ;
}

void	Cat::printAddressBrain(void) const
{
	std::cout << "Address of pointer Brain in the class Cat of type " << this->_type << ": " << &(this->_brain) << std::endl;
	return ;
}

void	Cat::printBrain(void) const
{
	this->_brain->printIdeas();
	return ;
}

const std::type_info	&Cat::getTypeOfClass(void) const
{
	return (typeid(*this));
}
