/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:54:17 by corellan          #+#    #+#             */
/*   Updated: 2023/06/11 12:59:37 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog"), _brain(NULL)
{
	std::cout << "Default constructor for Dog class called" << std::endl;
	this->_brain = new Brain("Woof Woof Dog Woof Woof");
	return ;
}

Dog::Dog(std::string type) : AAnimal(type), _brain(NULL)
{
	this->_type = type;
	std::cout << "Constructor for Dog class called with the type " << this->_type << std::endl;
	this->_brain = new Brain("Woof Woof Dog Woof Woof");
	return ;
}

Dog::Dog(Dog const &rhs)
{
	std::cout << "Copy constructor for Dog class called" << std::endl;
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return ;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Destructor for Dog class called" << std::endl;
	return ; 
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "Copy assigment for Dog class called" << std::endl;
	if (this != &rhs)
	{
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

void	Dog::makeSound(void) const
{
	std::cout << "I am a " << this->_type << " and I say Woof Woof" << std::endl;
	return ;
}

void	Dog::printAddressBrain(void) const
{
	std::cout << "Address of pointer Brain in the class Dog: " << &(this->_brain) << std::endl;
	return ;
}
