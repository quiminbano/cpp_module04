/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:13:25 by corellan          #+#    #+#             */
/*   Updated: 2023/06/13 20:17:07 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : list(NULL), _name("no_name")
{
	int	i;

	for (i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Default constructor for Character class called" << std::endl;
	return ;
}

Character::Character(std::string name) : list(NULL), _name(name)
{
	int	i;

	for (i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
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
	list = new MateriaList(*rhs.list);
	this->_counter = rhs.getCounter();
	this->_flag = rhs.getFlag();
	this->_name = rhs.getName();
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
	if (list != NULL)
		delete list;
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
		if (list != NULL)
			delete list;
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
		list = new MateriaList(*rhs.list);
		this->_counter = rhs.getCounter();
		this->_flag = rhs.getFlag();
		this->_name = rhs.getName();
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int	i;

	i = 0;
	while (this->_inventory[i] != NULL)
	{
		i++;
		if (i == 4)
		{
			std::cout << this->_name << ". Your inventory is full" << std::endl;
			delete m;
			return ;
		}
	}
	if (m->getType().compare("ice") == 0 || m->getType().compare("cure") == 0)
	{
		std::cout << this->_name << " has equiped the materia " << m->getType() << " in the slot " << i << std::endl;
		this->_inventory[i] = m;
	}
	else
	{
		std::cout << this->_name << ". Duude!! That materia is impossible to learn" << std::endl;
		delete m;
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		if (idx > 3)
			std::cout << "Watch out " << this->_name << "!!, The inventory has only four slot starting from zero" << std::endl;
		else
			std::cout << this->_name << ". Duude!! Are you trying to unequip a negative slot? That isn't possible" << std::endl;
		return ;
	}
	if (this->_inventory[idx] == NULL)
	{
		std::cout << this->_name << ". This slot is already empty" << std::endl;
		return ;
	}
	std::cout << "Materia unequiped from slot " << idx << " of " << this->_name << " poket" << std::endl;
	if (list == NULL)
		this->list = new MateriaList(this->_inventory[idx]);
	else
		this->list->addNode(this->_inventory[idx]);
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 3)
	{
		std::cout << "Watch out " << this->_name << "!!, The inventory has only four slots" << std::endl;
		return ;
	}
	else if (idx < 0)
	{
		std::cout << this->_name << "!! I don't have negative numbers of slots" << std::endl;
		return ;
	}
	if (this->_flag == 0)
	{
		std::cout << this->_name << ". The inventory is empty" << std::endl;
		return ;
	}
	if (this->_inventory[idx] == NULL)
	{
		std::cout << this->_name << ". The selected slot is empty" << std::endl;
		return ;
	}
	else
		this->_inventory[idx]->use(target);
	return ;
}

AMateria	*Character::getInventory(int i) const
{
	return (this->_inventory[i]);
}

int	Character::getFlag(void) const
{
	return (this->_flag);
}

int	Character::getCounter(void) const
{
	return (this->_counter);
}
