/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:11:55 by corellan          #+#    #+#             */
/*   Updated: 2023/06/09 14:54:59 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	this->_brain = new Brain;
	std::cout << "Default constructor for Cat class called" << std::endl;
	return ;
}

Cat::Cat(std::string type) : Animal(type)
{
	this->_brain = new Brain;
	std::cout << "Constructor for Cat class called with the type " << this->_type << std::endl;
	this->_type = type;
	return ;
}

Cat::Cat(Cat const &rhs)
{
	this->_brain = new Brain;
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
	std::cout << "Copy assigment for Cat class called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "I am a " << this->_type << " and I say Meowwwww" << std::endl;
	return ;
}
