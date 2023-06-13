/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaList.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:16:59 by corellan          #+#    #+#             */
/*   Updated: 2023/06/13 09:50:08 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaList.hpp"

MateriaList::MateriaList(void) : next(NULL), reserve(NULL)
{
	return ;
}

MateriaList::MateriaList(AMateria *ptr) : next(NULL), reserve(NULL)
{
	this->reserve = ptr;
	return ;
}

MateriaList::MateriaList(MateriaList const &rhs) : next(NULL), reserve(NULL)
{
	MateriaList	*temp;
	MateriaList	*temp2;

	temp = &(static_cast<MateriaList>(rhs));
	temp2 = this;
	while (temp != NULL)
	{
		temp2->reserve = rhs.reserve->clone();
		temp = temp->next;
		if (temp != NULL)
		{
			temp2 = temp2->next;
			temp2 = new MateriaList();
		}
		temp2->next = NULL;
	}
	return ;
	
}

MateriaList::~MateriaList(void)
{
	this->deleteList();
	return ;
}

MateriaList	&MateriaList::operator=(MateriaList const &rhs)
{
	MateriaList	*temp;
	MateriaList	*temp2;

	temp2 = this;
	temp = &(static_cast<MateriaList>(rhs));
	if (this != &rhs)
	{
		this->deleteList();
		while (temp != NULL)
		{
			temp2->reserve = rhs.reserve->clone();
			temp = temp->next;
			if (temp != NULL)
			{
				temp2 = temp2->next;
				temp2 = new MateriaList();
			}
			temp2->next = NULL;
		}
	}
	return (*this);
}

int	MateriaList::sizeList(void)
{
	int			i;
	MateriaList	*iter;

	i = 0;
	iter = this;
	while (iter != NULL)
	{
		i++;
		iter = iter->next;
	}
	return (i);
}

void	MateriaList::addNode(AMateria *ptr)
{
	MateriaList	*temp;

	temp = this;
	if (ptr == NULL)
		return ;
	while (temp->next != NULL)
		temp = temp->next;
	temp = new MateriaList();
	temp->reserve = ptr;
	return ;
}

MateriaList	*MateriaList::getLast(void)
{
	MateriaList	*temp;

	temp = this;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

void	MateriaList::deleteLast(void)
{
	MateriaList	*last;
	MateriaList	*secondLast;

	secondLast = this;
	if (this->sizeList() == 1)
		return ;
	while (secondLast->next->next != NULL)
		secondLast = secondLast->next;
	last = this->getLast();
	delete last->reserve;
	delete last;
	secondLast->next = NULL;
	return ;
}

void	MateriaList::deleteList(void)
{
	while (this->sizeList() > 1)
		this->deleteLast();
	delete this->reserve;
	this->reserve = NULL;
}