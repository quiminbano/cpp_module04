/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Horse.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:39:34 by corellan          #+#    #+#             */
/*   Updated: 2023/06/11 14:06:57 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Horse.hpp"

Horse::Horse(void) : AAnimal("Horse"), _brain(NULL)
{
	std::cout << "Default constructor for Horse class called" << std::endl;
	this->_brain = new Brain("Brrr I am a horse and I am amazing Brrr");
	return ;
}

Horse::Horse(std::string type) : AAnimal(type), _brain(NULL)
{
	this->_type = type;
	std::cout << "Constructor for Horse class called with the type " << this->_type << std::endl;
	this->_brain = new Brain("Brrr I am a horse and I am amazing Brrr");
	return ;
}

Horse::Horse(Horse const &rhs)
{
	std::cout << "Copy constructor for Horse class called" << std::endl;
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return ;
}

Horse::~Horse(void)
{
	delete this->_brain;
	std::cout << "Destructor for Horse class called" << std::endl;
	return ; 
}

Horse	&Horse::operator=(Horse const &rhs)
{
	std::cout << "Copy assigment for Horse class called" << std::endl;
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

void	Horse::makeSound(void) const
{
	std::cout << "I am a " << this->_type << " and I say Brrrrr. My owner sings: Look at my horse. My horse is amazing ..." << std::endl;
	return ;
}

void	Horse::printAddressBrain(void) const
{
	std::cout << "Address of pointer Brain in the class Horse: " << &(this->_brain) << std::endl;
	return ;
}
