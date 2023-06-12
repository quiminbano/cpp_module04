/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:13:25 by corellan          #+#    #+#             */
/*   Updated: 2023/06/12 18:35:59 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("no_name")
{
	int	i;

	for (i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (i = 0; i < 20; i++)
		this->_reserve[i] = NULL;
	std::cout << "Default constructor for Character class called" << std::endl;
	return ;
}

Character::Character(std::string name) : _name(name)
{
	int	i;

	for (i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (i = 0; i < 20; i++)
		this->_reserve[i] = NULL;
	std::cout << "Constructor for Character class called with the " << name << " name" << std::endl;
	return ;
}

Character::Character(Character const &rhs)
{
	int	i;

	std::cout << "Copy constructor for Character clas called" << std::endl;
	for (i = 0; i < 4; i++)
	{
		if (rhs.getInventory(i) != NULL)
		{
			if (rhs.getInventory(i)->getType().compare("ice") == 0)
				this->_inventory[i] = new Ice();
			else
				this->_inventory[i] = new Cure();
		}
		else
			this->_inventory[i] = NULL;
	}
	for (i = 0; i < 20; i++)
	{
		if (rhs.getReserve(i) != NULL)
		{
			if (rhs.getReserve(i)->getType().compare("ice") == 0)
				this->_reserve[i] = new Ice();
			else
				this->_reserve[i] = new Cure();
		}
		else
			this->_reserve[i] = NULL;
	}
	this->_counter = rhs.getCounter();
	this->_flag = rhs.getFlag();
	this->_name = rhs.getName();
	this->_reserveCounter = rhs.getReserveCounter();
}

Character::~Character(void)
{
	int	i;

	std::cout << "Default destructor for the Character class called" << std::endl;
	for (i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	for (i = 0; i < 20; i++)
	{
		if (this->_reserve[i] != NULL)
			delete this->_reserve[i];
	}
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	int	i;

	if (this != &rhs)
	{
		for (i = 0; i < 4; i++)
		{
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
		}
		for (i = 0; i < 20; i++)
		{
			if (this->_reserve[i] != NULL)
				delete this->_reserve[i];
		}
		for (i = 0; i < 4; i++)
		{
			if (rhs.getInventory(i) != NULL)
			{
				if (rhs.getInventory(i)->getType().compare("ice") == 0)
					this->_inventory[i] = new Ice();
				else
					this->_inventory[i] = new Cure();
			}
			else
				this->_inventory[i] = NULL;
		}
		for (i = 0; i < 20; i++)
		{
			if (rhs.getReserve(i) != NULL)
			{
				if (rhs.getReserve(i)->getType().compare("ice") == 0)
					this->_reserve[i] = new Ice();
				else
					this->_reserve[i] = new Cure();
			}
			else
				this->_reserve[i] = NULL;
		}
		this->_counter = rhs.getCounter();
		this->_flag = rhs.getFlag();
		this->_name = rhs.getName();
		this->_reserveCounter = rhs.getReserveCounter();
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	
}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, ICharacter &target)
{
	
}

AMateria	*Character::getInventory(int i) const
{
	return (this->_inventory[i]);
}

AMateria	*Character::getReserve(int i) const
{
	return (this->_reserve[i]);
}

int	Character::getFlag(void) const
{
	return (this->_flag);
}

int	Character::getCounter(void) const
{
	return (this->_counter);
}

int	Character::getReserveCounter(void) const
{
	return (this->_reserveCounter);
}
