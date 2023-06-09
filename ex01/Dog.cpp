/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:54:17 by corellan          #+#    #+#             */
/*   Updated: 2023/06/09 14:53:46 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	this->_brain = new Brain;
	std::cout << "Default constructor for Dog class called" << std::endl; 
	return ;
}

Dog::Dog(std::string type) : Animal(type)
{
	this->_brain = new Brain;
	std::cout << "Constructor for Dog class called with the type " << this->_type << std::endl;
	this->_type = type;
	return ;
}

Dog::Dog(Dog const &rhs)
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
	std::cout << "Copy assigment for Dog class called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "I am a " << this->_type << " and I say Woof Woof" << std::endl;
	return ;
}
