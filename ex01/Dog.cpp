/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:54:17 by corellan          #+#    #+#             */
/*   Updated: 2023/06/16 12:55:52 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(NULL)
{
	std::cout << "Default constructor for Dog class called" << std::endl;
	this->_brain = new Brain("Woof Woof Dog Woof Woof");
	return ;
}

Dog::Dog(std::string type) : Animal(type), _brain(NULL)
{
	this->_type = type;
	std::cout << "Constructor for Dog class called with the type " << this->_type << std::endl;
	this->_brain = new Brain("Woof Woof Dog Woof Woof");
	return ;
}

Dog::Dog(Dog const &rhs) : Animal("Dog"), _brain(NULL)
{
	std::cout << "Copy constructor for Dog class called" << std::endl;
	*this = rhs;
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
	std::string	temp = rhs.getTypeOfClass().name();
	std::string temp2 = this->getTypeOfClass().name();
	Dog			*ptr = const_cast<Dog*>(&rhs);

	std::cout << "Copy assigment for Dog class called" << std::endl;
	if (this != &rhs)
	{
		if (ptr == NULL)
		{
			std::cout << "You are using the copy assigment operator passing a reference of a NULL pointer. Aborting mission" << std::endl;
			if (this->_brain == NULL)
				this->_brain = new Brain("Woof Woof Dog Woof Woof");
			return (*this);
		}
		if (temp.compare(temp2) != 0)
		{
			std::cout << "You are trying to use the copy assigment operator in two different animals. Aborting mission" << std::endl;
			if (this->_brain == NULL)
				this->_brain = new Brain("Woof Woof Dog Woof Woof");
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

void	Dog::makeSound(void) const
{
	std::cout << "I am a " << this->_type << " and I say Woof Woof" << std::endl;
	return ;
}

void	Dog::printAddressBrain(void) const
{
	std::cout << "Address of pointer Brain in the class Dog of type " << this->_type << ": " << &(this->_brain) << std::endl;
	return ;
}

void	Dog::printBrain(void) const
{
	this->_brain->printIdeas();
	return ;
}

const std::type_info	&Dog::getTypeOfClass(void) const
{
	return (typeid(*this));
}
